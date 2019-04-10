#include "rectangle.h"
#include <iostream>



Rectangle::Rectangle(float width , float height){
    _height = height;
    _width = width;
}

Rectangle::Rectangle(){
    _height = 1;
    _width = 1;
}

float Rectangle::get_height(){
    return _height;
}
void Rectangle::set_height(float height){
    if (height > 0 && height < 20)
        _height = height;
}

float Rectangle::get_width(){
    return _width;
}
void Rectangle::set_width(float width){
    if(width > 0 && width < 20)
        _width = width;
}

float Rectangle::get_area(){
    return get_height()*get_width();
}

float Rectangle::get_perimeter(){
    return (get_height()*2)+(get_width()*2);
}