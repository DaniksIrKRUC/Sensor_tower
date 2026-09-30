#include <cmath>
#include "Polar_coordinate.h"
#include "Cartesian_coordinate.h"
#include "float_equality.h"

namespace Navtech::Polar {

    Cartesian::Coordinate Coordinate::to_cartesian() const
    {
        return Cartesian::Coordinate {
            std::round((range * std::sin(bearing.to_radians())) * 1000.0f) / 1000.0f,
            std::round((range * std::cos(bearing.to_radians())) * 1000.0f) / 1000.0f
        };
    }


    bool Coordinate::operator==(const Coordinate& rhs) const
    {
        // Polar coordinates are considered equal if:
        // - their ranges are within 1mm of each other at 100m
        // - their bearings are within 0.001 degrees
        //
        return  (Utility::essentially_equal(this->range, rhs.range, 0.00001)) && 
                (this->bearing == rhs.bearing);
    }


    bool Coordinate::operator!=(const Coordinate& rhs) const
    {
        return !(*this == rhs);
    }


    std::string Coordinate::to_string() const
    {
        std::stringstream stream { };

        stream << "[";
        stream << std::fixed << std::setprecision(2);
        stream << bearing.to_string() << ", ";
        stream << range << "m";
        stream << "]";

        return stream.str();
    }

}