//
// Created by tomsh on 9/8/2021.
//

#ifndef RECTANGLE_RECTANGLE_H
#define RECTANGLE_RECTANGLE_H


#include "RectangleInterface.h"
class Rectangle: public RectangleInterface{
private:
    double length, width;
public:
    Rectangle();
    bool set( double newLength, double newWidth );
    double getLength() const;
    double getWidth() const;
    double getArea() const;
};


#endif //RECTANGLE_RECTANGLE_H
