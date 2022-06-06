#include "Circle.h"

void Circle::changeRadius(int radius)
{    
        this->radius = radius;    
}

float Circle::getRadius()
{
    return radius;
}

float Circle::getArea() 
{
    return 3.14 * radius * radius; 
}

float Circle::getCircum()
{
    return 3.14 * 2 * radius;
}

bool Circle::operator==(Circle a)
{    
    return this->radius == a.radius;    
}

bool Circle::operator>(Circle a)
{
    if (this->getCircum() > a.getCircum()) return true;
        else return false;
}