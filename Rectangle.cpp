//
// Created by tomsh on 9/8/2021.
//

#include "Rectangle.h"


Rectangle::Rectangle(){
    length = width = 1.0;
}

bool Rectangle::set(double newLength, double newWidth){
    if(newLength > 0 && newWidth >0){
        length = newLength;
        width = newWidth;
        return true;
    }
    return false;
}

double Rectangle::getLength() const{
    return length;
}

double Rectangle::getWidth() const{
    return width;
}

double Rectangle::getArea() const{
    return length*width;
}