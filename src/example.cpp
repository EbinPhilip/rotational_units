#include <iostream>
#include "Rotational_Units.h"
#include <cmath>

using namespace std;
using namespace RUnits;

int main(void)
{
    int n;
    cin>>n;
    
    Degrees deg;
    Radians rad;

    cout<<"degrees to rad:"<<endl;
    deg = 180.0;
    rad = deg;
    cout<<"degrees:"<<deg.Value()<<endl;
    cout<<"radians:"<<rad.Value()<<endl;

    cout<<endl;

    cout<<"rad to deg:"<<endl;
    rad = 2*M_PI;
    deg = rad;
    cout<<"degrees:"<<deg.Value()<<endl;
    cout<<"radians:"<<rad.Value()<<endl;

    cout<<endl;

    Degrees_Per_Sec deg_per_sec;
    Radians_Per_Sec rad_per_sec;
    Rotations_Per_Sec rot_per_sec;
    RPM rpm;

    cout<<"deg/s conversions:"<<endl;
    deg_per_sec = 180.0;
    rad_per_sec = deg_per_sec;
    rot_per_sec = deg_per_sec;
    rpm = deg_per_sec;
    cout<<"deg/s:"<<deg_per_sec.Value()<<endl;
    cout<<"rad/s:"<<rad_per_sec.Value()<<endl;
    cout<<"rot/s:"<<rot_per_sec.Value()<<endl;
    cout<<"rpm:"<<rpm.Value()<<endl;

    cout<<endl;

    cout<<"rad/s conversions:"<<endl;
    rad_per_sec = 2*M_PI;
    deg_per_sec = rad_per_sec;
    rot_per_sec = rad_per_sec;
    rpm = rad_per_sec;
    cout<<"deg/s:"<<deg_per_sec.Value()<<endl;
    cout<<"rad/s:"<<rad_per_sec.Value()<<endl;
    cout<<"rot/s:"<<rot_per_sec.Value()<<endl;
    cout<<"rpm:"<<rpm.Value()<<endl;

    cout<<endl;

    cout<<"rot/s conversions:"<<endl;
    rot_per_sec = 0.1;
    deg_per_sec = rot_per_sec;
    rad_per_sec = rot_per_sec;
    rpm = rot_per_sec;
    cout<<"deg/s:"<<deg_per_sec.Value()<<endl;
    cout<<"rad/s:"<<rad_per_sec.Value()<<endl;
    cout<<"rot/s:"<<rot_per_sec.Value()<<endl;
    cout<<"rpm:"<<rpm.Value()<<endl;

    cout<<endl;

    cout<<"rpm conversions:"<<endl;
    rpm = 10;
    deg_per_sec = rpm;
    rad_per_sec = rpm;
    rot_per_sec = rpm;
    cout<<"deg/s:"<<deg_per_sec.Value()<<endl;
    cout<<"rad/s:"<<rad_per_sec.Value()<<endl;
    cout<<"rot/s:"<<rot_per_sec.Value()<<endl;
    cout<<"rpm:"<<rpm.Value()<<endl;

    return 0;
}
