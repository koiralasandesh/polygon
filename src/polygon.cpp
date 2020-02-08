#include "polygon.h"

int Polygon::get_sides(){
    return sides;
}
double Polygon::get_perimeter(){
    return perimeter;
}

void Polygon::add_side (double x){
    perimeter=perimeter+x;
    sides++;
}