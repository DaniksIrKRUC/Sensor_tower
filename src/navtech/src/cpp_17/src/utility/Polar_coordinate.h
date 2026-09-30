#ifndef POLAR_COORDINATE_H
#define POLAR_COORDINATE_H

#include "Units.h"

namespace Navtech::Cartesian { struct Coordinate; }

namespace Navtech::Polar {

    // Zero degrees is radar North
    //
    struct Coordinate {
        Unit::Metre   range   { };
        Unit::Degrees bearing { };

        Coordinate() = default;
        Coordinate(Unit::Metre rng, Unit::Degrees deg) : range { rng }, bearing { deg } { }

        Cartesian::Coordinate to_cartesian() const;

        // Comparison
        //
        bool operator==(const Coordinate& rhs) const;
        bool operator!=(const Coordinate& rhs) const;

        std::string to_string() const;
    };

} // namespace Navtech::Cartesian

#endif // POLAR_COORDINATE_H