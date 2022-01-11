#include "Rotational_Units.h"

using namespace RUnits;

Radians Deg2Rad(const Degrees& deg)
{
    return (RADIANS_MAX/DEGREES_MAX) * deg.Value();
}

Degrees Rad2Deg(const Radians& rad)
{
    return (DEGREES_MAX/RADIANS_MAX) * rad.Value();
}

Rotations_Per_Sec ToRotationsPerSecond(const Radians_Per_Sec& rad_per_sec)
{
    return rad_per_sec.Value()/RADIANS_MAX;
}

Radians_Per_Sec FromRotationsPerSecond(const Rotations_Per_Sec& rot_per_sec)
{
    return rot_per_sec.Value()*RADIANS_MAX;
}

RPM ToRPM(const Rotations_Per_Sec& rot_per_sec)
{
    return rot_per_sec.Value() * SECONDS_MAX;
}

Rotations_Per_Sec FromRPM(const RPM& rpm)
{
    return rpm.Value()/SECONDS_MAX;
}

Degrees::operator Radians() const
{
    return Deg2Rad(*this);
}

Radians::operator Degrees() const
{
    return Rad2Deg(*this);
}

Degrees_Per_Sec::operator Radians_Per_Sec() const
{
    return Deg2Rad(value).Value();
}

Degrees_Per_Sec::operator Rotations_Per_Sec() const
{
    return ToRotationsPerSecond(*this);
}

Degrees_Per_Sec::operator RPM() const
{
    return ToRPM(*this);
}

Radians_Per_Sec::operator Degrees_Per_Sec() const
{
    return Rad2Deg(value).Value();
}

Radians_Per_Sec::operator Rotations_Per_Sec() const
{
    return ToRotationsPerSecond(*this);
}

Radians_Per_Sec::operator RPM() const
{
    return ToRPM(*this);
}

Rotations_Per_Sec::operator Degrees_Per_Sec() const
{
    return FromRotationsPerSecond(*this);
}

Rotations_Per_Sec::operator Radians_Per_Sec() const
{
    return FromRotationsPerSecond(*this);
}

Rotations_Per_Sec::operator RPM() const
{
    return ToRPM(*this);
}

RPM::operator Degrees_Per_Sec() const
{
    return FromRPM(*this);
}

RPM::operator Radians_Per_Sec() const
{
    return FromRPM(*this);
}

RPM::operator Rotations_Per_Sec() const
{
    return FromRPM(*this);
}



