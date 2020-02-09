#include <iostream>
#include "polygon.h"

int main(){
    double length;
    double apothem;
    Polygon polygon;
    while (true){
        std::cout<<"Enter the apothem of the polygon: "<<std::endl;
        std::cin>>apothem;
        if (apothem<=0){
            std::cout<<"Invalid value entered."<<std::endl;
            continue;
        }
        break;
    }

    while(true){
        std::cout<<"Enter length of side (negative or 0 to exit):"<<std::endl;
        


        std::cin>>length;
        if (length<=0){
            std::cout<<"Current Polygon sides: "<<polygon.get_sides()<<", perimeter: "<<polygon.get_perimeter()<<" units,  area: "<<polygon.get_area(apothem)<<" squared units."<< std::endl;
            std::cout<<"=========================END================================"<<std::endl;
            break;
        }
        polygon.add_side(length);
        std::cout<<"Current Polygon sides: "<<polygon.get_sides()<<", perimeter: "<<polygon.get_perimeter()<<" units,  area: "<<polygon.get_area(apothem)<<" squared units."<< std::endl;
        std::cout<<"--------------------------------------------------------------"<<std::endl;
    }

}
