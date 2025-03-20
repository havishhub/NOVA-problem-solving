#include<iostream>
#include "area.h"  
//we used enum to seperate the calculateArea function of rectangle from triangle
//so use "Rectangle" in ShapeType to call the calculateArea function of rectangle
int main(){
    double radius,length,width,base,height;
    std::cout<<"Enter the radius of the circle: ";
    std::cin>>radius;
    std::cout<<"The area of the circle is: "<<calculateArea(radius)<<std::endl;
    std::cout<<"Enter the length and width of the rectangle: ";
    std::cin>>length>>width;
    std::cout<<"The area of the rectangle is: "<<calculateArea(length,width,ShapeType::Rectangle)<<std::endl;
    std::cout<<"Enter the base and height of the triangle: ";
    std::cin>>base>>height;
    std::cout<<"The area of the triangle is: "<<calculateArea(base,height)<<std::endl;
    return 0;
}