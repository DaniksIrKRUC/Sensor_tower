#ifndef CARTESIAN_COORDINATE_H
#define CARTESIAN_COORDINATE_H

#include "Units.h"

namespace Navtech::Polar { struct Coordinate; }

namespace Navtech::Cartesian {

    // +ve Y is along radar North
    // +ve X is along radar East
    //
    struct Coordinate {
        Unit::Metre x { };
        Unit::Metre y { };


        Polar::Coordinate to_polar() const;

        // Comparison
        //
        bool operator==(const Coordinate& rhs) const;
        bool operator!=(const Coordinate& rhs) const;

        // Operations
        //
        Coordinate operator+(const Coordinate& rhs) const;
        Coordinate& operator+=(const Coordinate& rhs);

        // Linear distance between two coordinates
        //
        Unit::Metre operator-(const Coordinate& rhs) const;

        std::string to_string() const;
    };

} // namespace Navtech::Cartesian

#endif // CARTESIAN_COORDINATE_H