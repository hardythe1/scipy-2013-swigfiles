
#include "example.h"

void Shape::setWidth(int w){
    width = w;
}

void Shape::setHeight(int h){
    height = h;
}

void Rectangle::printShape(){
    std::cout << "Width : " << width << "  Height : " << height; 
}
int Rectangle::getArea(){
    return (this->width * this->height);
}
