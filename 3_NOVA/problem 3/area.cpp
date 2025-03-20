#include<iostream>
#include "area.h"
    double calculateArea(double radius){
        return 3.14*radius*radius;
    }                    // Circle
    double calculateArea(double length, double width,ShapeType type){
        return length*width;
    }      // if type==Rectangle
   double calculateArea(double base, double height){
    return 0.5*base*height;
   }        // if type==Rectangle  