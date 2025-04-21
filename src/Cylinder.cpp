# ifndef CYLINDER_CPP
# define CYLINDER_CPP

#include <iostream>
#include <iomanip>
#include <cmath>
# include "Cylinder.h"
using namespace std;

const double pi = 3.1415926;
//second ver. 
//
//s

double Cylinder :: SurfaceArea(){
    double result = M_PI * radius * radius*2  +  M_PI * radius * height*2; 
    return result;
}

double Cylinder :: Volume(){
    double result = M_PI * radius * radius * height;
    return result;
}

double Cylinder :: Circumference(){
    double result = M_PI * radius*2;
    return result;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height; 
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " <<fixed << std::setprecision(3) << cldr.Circumference() << endl;
    out << "SurfaceArea: " <<fixed << std::setprecision(3) << cldr.SurfaceArea() << endl;
    out << "Volume: " << fixed << std::setprecision(3) << cldr.Volume() << endl;

    return out;
}

# endif
