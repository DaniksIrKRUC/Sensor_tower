#ifndef RADIANS_H
#define RADIANS_H

#include <iostream>
#include <iomanip>
#include <cmath>

#include "constants.h"

namespace Navtech::Unit {

    // Radians represents a angular measurement between
    // 0 and 2π, measured clockwise
    // Angles greater than 2π will be wrapped.
    // Angles less than zero are taken to be anti-clockwise
    // and converted to their clockwise equivalent.
    //
    class Radians {
    public:
        constexpr Radians() = default;
        constexpr Radians(float init) : value { normalise(init) }
        {
        }

        constexpr float to_float() const
        {
            return value;
        }

        constexpr unsigned int to_uint() const
        {
            return static_cast<unsigned int>(std::round(value));
        }

        constexpr float to_degrees() const
        {
            return value * (180.0f / pi<float>);
        }

        std::string to_string() const
        {
            std::ostringstream os { };
            os << std::fixed << std::setprecision(2);
            os << value << "rad";
            return os.str();
        }

        friend std::ostream& operator<<(std::ostream& os, const Radians& a)
        {
            os << a.to_string();
            return os;
        }

        // Comparison
        //
        constexpr bool operator==(const Radians& rhs) const
        {
            // Radians are considered 'equal' if the difference is less 
            // than could be measured by the encoder.
            // Since we are operating on a circle and angle values wrap 
            // at 2π Radians, the delta between the left-hand-side and 
            // right-hand-side values could be either approaching zero, 
            // or approaching 2π Radians.
            //
            const auto& lhs      { *this };
            bool approaching_0   { std::abs(lhs.value - rhs.value) <= epsilon };
            bool approaching_2pi { ((2 * pi<float>) - std::abs(lhs.value - rhs.value)) <= epsilon };
            
            return approaching_0 || approaching_2pi;
        }

        constexpr bool operator!=(const Radians& rhs) const
        {
           return !operator==(rhs);
        }

        constexpr bool operator<(const Radians& rhs) const
        {
           return (this->value < rhs.value);
        }

        constexpr bool operator>(const Radians& rhs) const
        {
           return (this->value > rhs.value);
        }

        constexpr bool operator<=(const Radians& rhs) const
        {
           return ((*this == rhs) || (*this < rhs));
        }

        constexpr bool operator>=(const Radians& rhs) const
        {
           return ((*this == rhs) || (*this > rhs));
        }

        // Addition/subtraction
        //
        constexpr Radians operator+(const Radians& rhs) const
        {
            return Radians { this->value + rhs.value };
        }

        constexpr Radians operator-(const Radians& rhs) const
        {
            return Radians { this->value - rhs.value };
        }

        Radians& operator+=(const Radians& rhs)
        {
            value = normalise(this->value + rhs.value);
            return *this;
        }

        Radians& operator-=(const Radians& rhs)
        {
            value = normalise(this->value - rhs.value);
            return *this;
        }

    private:
        float value { };
        static constexpr float epsilon { 0.01 };  // Smaller than resolution of the encoder!

        constexpr float normalise(float value) const
        {
            auto rad_2pi = 2 * pi<float>;
            
            float result { };
            while (value >= rad_2pi)  value = (value - rad_2pi);
            if (value <= -rad_2pi)    value = (value + rad_2pi);
            if (value < 0.0f)         value = (rad_2pi + value);

            return (result + value);
        }
    };

} // namespace Navtech::Utility


constexpr Navtech::Unit::Radians operator""_rad(long double value)
{
    return Navtech::Unit::Radians { static_cast<float>(value) };
}


constexpr Navtech::Unit::Radians operator""_rad(unsigned long long int value)
{
    return Navtech::Unit::Radians { static_cast<float>(value) };
}

#endif // RADIANS_H