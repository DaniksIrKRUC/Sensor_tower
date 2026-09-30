// ---------------------------------------------------------------------------------------------------------------------
// Copyright 2022 Navtech Radar Limited
// This file is part of iasdk which is released under The MIT License (MIT).
// See file LICENSE.txt in project root or go to https://opensource.org/licenses/MIT
// for full license details.
//
// ---------------------------------------------------------------------------------------------------------------------

#ifndef UNITS_H
#define UNITS_H

#include <cstdint>

#include "Degrees.h"
#include "Radians.h"
#include "Percentage.h"
#include "Memory_types.h"
#include "constants.h"

namespace Navtech::Unit {

    using Bin               = std::uint16_t;
    using Azimuth           = std::uint16_t;
    using Azimuth_num       = Azimuth;
    using Encoder_step      = std::uint16_t;

    using Volt              = float;
    using Amp               = float;
    using mHz               = std::uint16_t;

    using Metre             = float;
    using Metres_per_sec    = float;

    using dB                = float;

} // namespace Navtech::Unit


// User-defined literals
//
constexpr inline Navtech::Unit::Bin operator""_bins(unsigned long long val)
{
    return static_cast<Navtech::Unit::Bin>(val);
}


constexpr inline Navtech::Unit::Azimuth_num operator""_azimuths(unsigned long long val)
{
    return static_cast<Navtech::Unit::Azimuth_num>(val);
}


constexpr inline Navtech::Unit::Encoder_step operator""_steps(unsigned long long val)
{
    return static_cast<Navtech::Unit::Encoder_step>(val);
}


constexpr inline Navtech::Unit::Volt operator""_volts(unsigned long long val)
{
    return static_cast<Navtech::Unit::Volt>(val);
}


constexpr inline Navtech::Unit::Volt operator""_volts(long double val)
{
    return static_cast<Navtech::Unit::Volt>(val);
}


constexpr inline Navtech::Unit::Amp operator""_amps(unsigned long long val)
{
    return static_cast<Navtech::Unit::Amp>(val);
}


constexpr inline Navtech::Unit::Amp operator""_amps(long double val)
{
    return static_cast<Navtech::Unit::Amp>(val);
}


constexpr inline Navtech::Unit::mHz operator""_mHz(unsigned long long val)
{
    return static_cast<Navtech::Unit::mHz>(val);
}


constexpr inline Navtech::Unit::Amp operator""_Hz(unsigned long long val)
{
    return static_cast<Navtech::Unit::mHz>(val * 1000);
}


constexpr inline Navtech::Unit::Amp operator""_Hz(long double val)
{
    return static_cast<Navtech::Unit::mHz>(val * 1000.0f);
}


constexpr inline Navtech::Unit::Metre operator""_m(unsigned long long val)
{
    return static_cast<Navtech::Unit::Metre>(val);
}


constexpr inline Navtech::Unit::Metre operator""_m(long double val)
{
    return static_cast<Navtech::Unit::Metre>(val);
}


constexpr inline Navtech::Unit::Metres_per_sec operator""_mps(unsigned long long val)
{
    return static_cast<Navtech::Unit::Metres_per_sec>(val);
}


constexpr inline Navtech::Unit::Metres_per_sec operator""_mps(long double val)
{
    return static_cast<Navtech::Unit::Metres_per_sec>(val);
}


constexpr inline Navtech::Unit::dB operator""_dB(unsigned long long val)
{
    return static_cast<Navtech::Unit::dB>(val);
}


constexpr inline Navtech::Unit::dB operator""_dB(long double val)
{
    return static_cast<Navtech::Unit::dB>(val);
}

#endif // UNITS_H