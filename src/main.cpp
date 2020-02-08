#include <iostream>
#include "polygon.h"

int main(){
    double length;
    Polygon polygon;
    while(true){
        std::cout<<"Enter length of side (negative or 0 to exit):"<<std::endl;
        std::cin>>length;
        if (length<=0){
            std::cout<< "Invalid length entered, exiting..."<<std::endl;
            std::cout<<"Current Polygon perimeter: "<<polygon.get_perimeter()<<" units, sides: "<<polygon.get_sides()<<"."<< std::endl;
            std::cout<<"=========================END================================"<<std::endl;
            break;
        }
        polygon.add_side(length);
        
        std::cout<<"Current Polygon perimeter: "<<polygon.get_perimeter()<<" units, sides: "<<polygon.get_sides()<<"."<<std::endl;
        std::cout<<"--------------------------------------------------------------"<<std::endl;
    }

}
