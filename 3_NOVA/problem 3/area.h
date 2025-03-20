#ifndef AREA_H
#define AREA_H
enum ShapeType { Rectangle };
double calculateArea(double radius);                    // Circle
double calculateArea(double length, double width,ShapeType type);      // if type==Rectangle
double calculateArea(double base, double height ); // if type==Triangle

#endif 
