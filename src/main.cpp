#include <iostream>
#include "polygon.h"

int main(){
    std::cout<<"Enter length of side: (negative or 0 to exit)"<<std::endl;
    double length;
    Polygon polygon;
    while(true){
        std::cin>>length;
        if (length<=0){
            std::cout<< "Invalid length entered, exiting..."<<std::endl;
            std::cout<<"Current Polygon perimeter: "<<polygon.get_perimeter()<<"units, sides: "<<polygon.get_sides()<< std::endl;
            break;
        }
        polygon.add_side(length);
        std::cout<<"Current Polygon perimeter: "<<polygon.get_perimeter()<<"units, sides: "<<polygon.get_sides()<<std::endl;
    }

}
