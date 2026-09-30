#include <cmath>
#include "Cartesian_coordinate.h"
#include "Polar_coordinate.h"
#include "float_equality.h"

namespace Navtech::Cartesian {

    Polar::Coordinate Coordinate::to_polar() const
    {
        using namespace std;
        using namespace Unit;

        Metre   range   { };
        Radians bearing { };

        range = hypot(x, y);
        
        if (y >= 0.0f) bearing = Radians { atan(x / y) };
        if (y < 0.0f)  bearing = Radians { atan(x / y) + pi<float> };

        return Polar::Coordinate {
            range,
            bearing.to_degrees()
        };
    }


    bool Coordinate::operator==(const Coordinate& rhs) const
    {
        // Cartesian coordinates are considered equal if they
        // are within 1mm of each other at 100m.  This is well below
        // the resolution of the radar.
        //
        return  (Utility::essentially_equal(this->x, rhs.x, 0.00001)) && 
                (Utility::essentially_equal(this->y, rhs.y, 0.00001));
    }


    bool Coordinate::operator!=(const Coordinate& rhs) const
    {
        return !(*this == rhs);
    }


    Coordinate Coordinate::operator+(const Coordinate& rhs) const
    {
        return Coordinate { 
            this->x + rhs.x,
            this->y + rhs.y
        };
    }


    Coordinate& Coordinate::operator+=(const Coordinate& rhs)
    {
        this->x += rhs.x;
        this->y += rhs.y;

        return *this;
    }


    Unit::Metre Coordinate::operator-(const Coordinate& rhs) const
    {
        return std::hypot(
            this->x - rhs.x,
            this->y - rhs.y
        );
    }


    std::string Coordinate::to_string() const
    {
        std::stringstream stream { };

        stream << "[";
        stream << std::fixed << std::setprecision(2);
        stream << x << ", " << y;
        stream << "]";

        return stream.str();
    }
}