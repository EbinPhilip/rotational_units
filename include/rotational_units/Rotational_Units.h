#ifndef __ROTATIONAL_UNITS_H__
#define __ROTATIONAL_UNITS_H__

namespace RUnits
{

const double PI_CONSTANT = 3.141592653589793116;
const double RADIANS_MAX = 2*PI_CONSTANT;
const double DEGREES_MAX = 360.00;
const double SECONDS_MAX = 60.0;

class Degrees;
class Radians;

class Degrees_Per_Sec;
class Radians_Per_Sec;
class Rotations_Per_Sec;
class RPM;

class Rotational_Unit
{
public:
    double Value() const
    {
        return value;
    }
protected:
    Rotational_Unit(double val)
    : value(val)
    { }
    double value;
};

class Degrees : public Rotational_Unit
{
public:
    Degrees(double val = 0.0)
    : Rotational_Unit(val)
    { }
    
    operator Radians() const;
};

class Radians : public Rotational_Unit
{
public:
    Radians(double val = 0.0)
    : Rotational_Unit(val)
    { }
    
    operator Degrees() const;
};

class Degrees_Per_Sec : public Rotational_Unit
{
public:
    Degrees_Per_Sec(double val = 0.0)
    : Rotational_Unit(val)
    { }
    
    operator Radians_Per_Sec() const;
    operator Rotations_Per_Sec() const;
    operator RPM() const;
};

class Radians_Per_Sec : public Rotational_Unit
{
public:
    Radians_Per_Sec(double val = 0.0)
    : Rotational_Unit(val)
    { }
    
    operator Degrees_Per_Sec() const;
    operator Rotations_Per_Sec() const;
    operator RPM() const;
};

class Rotations_Per_Sec : public Rotational_Unit
{
public:
    Rotations_Per_Sec(double val = 0.0)
    : Rotational_Unit(val)
    { }
    
    operator Degrees_Per_Sec() const;
    operator Radians_Per_Sec() const;
    operator RPM() const;
};

class RPM : public Rotational_Unit
{
public:
    RPM(double val = 0.0)
    : Rotational_Unit(val)
    { }
    
    operator Degrees_Per_Sec() const;
    operator Radians_Per_Sec() const;
    operator Rotations_Per_Sec() const;
};

}

#endif