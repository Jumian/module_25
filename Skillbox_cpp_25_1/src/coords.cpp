#include <iostream>
#include <cmath>
#include "coords.h"
#define COORD_ACCURACY 0.001

bool is_equal(struct coord &first,struct coord &second){
    if(fabs(first.x-second.x)<=COORD_ACCURACY && fabs(first.y-second.y)<=COORD_ACCURACY) return true;
    return false;
}

bool isSameLine(std::vector<coord> coords1,std::vector<coord> coords2){
    if (coords1.size()<2||coords2.size()<2) return false;
    if (( is_equal(coords1.at(0),coords2.at(0))    &&
            is_equal(coords1.at(1),coords2.at(1))) ||
            (is_equal(coords1.at(0),coords2.at(1)) &&
            is_equal(coords1.at(1),coords2.at(0))))
        return true;
    return false;
}

struct coord input_coords(std::string name){
    struct coord new_coord;
    std::cout << name << " ";
    new_coord.x= input_int("X:");
    std::cout << name << " ";
    new_coord.y= input_int("Y:");
    return new_coord;
}

void print_coord(struct coord & coords){
    std::cout << "("<<coords.x <<":"<<coords.y<<")";
}

bool isPointOnLine(struct coord &lineP1, struct coord &LineP2, struct coord &Point){
    double a= lineP1.x - LineP2.x,
    b= lineP1.y - LineP2.y,
    c= lineP1.x - Point.x,
    d= lineP1.y - Point.y;
    return ((fabs(c)<=fabs(a))&&fabs((a*d)-(c*b))<=COORD_ACCURACY);
}

#undef COORD_ACCURACY