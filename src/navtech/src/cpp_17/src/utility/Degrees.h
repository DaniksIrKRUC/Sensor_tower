#ifndef ANGLE_H
#define ANGLE_H

#include <iostream>
#include <iomanip>
#include <cmath>

#include "constants.h"

namespace Navtech::Unit {

    // Degrees represents a angular measurement between
    // 0.0 and 360.0, measured clockwise
    // Degrees greater than 360.0 will be wrapped.
    // Degrees less than zero are taken to be anti-clockwise
    // and converted to their clockwise equivalent.
    //
    class Degrees {
    public:
        constexpr Degrees() = default;
        constexpr Degrees(float init) : value { normalise(init) }
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

        constexpr float to_radians() const
        {
            return value * (pi<float> / 180);
        }

        std::string to_string() const
        {
            std::ostringstream os { };
            os << std::fixed << std::setprecision(2);
            os << value << R"(°)";
            return os.str();
        }

        friend std::ostream& operator<<(std::ostream& os, const Degrees& a)
        {
            os << a.to_string();
            return os;
        }

        // Comparison
        //
        constexpr bool operator==(const Degrees& rhs) const
        {
            // Degrees are considered 'equal' if the difference is less 
            // than could be measured by the encoder.
            // Since we are operating on a circle and angle values wrap 
            // at 360 degrees, the delta between the left-hand-side and 
            // right-hand-side values could be either approaching zero, 
            // or approaching 360 degrees.
            //
            const auto& lhs      { *this };
            bool approaching_0   { std::abs(lhs.value - rhs.value) <= epsilon };
            bool approaching_360 { (360.0f - std::abs(lhs.value - rhs.value)) <= epsilon };
            
            return approaching_0 || approaching_360;
        }

        constexpr bool operator!=(const Degrees& rhs) const
        {
           return !operator==(rhs);
        }

        constexpr bool operator<(const Degrees& rhs) const
        {
           return (this->value < rhs.value);
        }

        constexpr bool operator>(const Degrees& rhs) const
        {
           return (this->value > rhs.value);
        }

        constexpr bool operator<=(const Degrees& rhs) const
        {
           return ((*this == rhs) || (*this < rhs));
        }

        constexpr bool operator>=(const Degrees& rhs) const
        {
           return ((*this == rhs) || (*this > rhs));
        }

        // Addition/subtraction
        //
        constexpr Degrees operator+(const Degrees& rhs) const
        {
            return Degrees { this->value + rhs.value };
        }

        constexpr Degrees operator-(const Degrees& rhs) const
        {
            return Degrees { this->value - rhs.value };
        }

        Degrees& operator+=(const Degrees& rhs)
        {
            value = normalise(this->value + rhs.value);
            return *this;
        }

        Degrees& operator-=(const Degrees& rhs)
        {
            value = normalise(this->value - rhs.value);
            return *this;
        }

    private:
        float value { };
        static constexpr float epsilon { 0.01 };  // Smaller than resolution of the encoder!

        constexpr float normalise(float value) const
        {
            float result { };
            while (value >= 360.0f)  value = (value - 360.0f);
            if (value <= -360.0f)    value = (value + 360.0f);
            if (value < 0.0f)        value = (360.0f + value);

            return (result + value);
        }
    };

} // namespace Navtech::Utility


constexpr Navtech::Unit::Degrees operator""_deg(long double value)
{
    return Navtech::Unit::Degrees { static_cast<float>(value) };
}


constexpr Navtech::Unit::Degrees operator""_deg(unsigned long long int value)
{
    return Navtech::Unit::Degrees { static_cast<float>(value) };
}

#endif // ANGLE_H