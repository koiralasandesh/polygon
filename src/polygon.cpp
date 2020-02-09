#include "polygon.h"

int Polygon::get_sides(){
    return _sides;
}
double Polygon::get_perimeter(){
    return _perimeter;
}

void Polygon::add_side (double length){
    _perimeter=_perimeter+length;
    _sides++;
}
double Polygon::get_area(double apothem){
    _area= 0.5*apothem*_perimeter;
    return _area;
}