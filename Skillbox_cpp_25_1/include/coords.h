#pragma once

#include "cinputs.h"
#include <vector>
struct coord{
    double x,y;
};

bool is_equal(struct coord &first,struct coord &second);

struct coord input_coords(std::string name);

bool isSameLine(std::vector<coord> coords1,std::vector<coord> coords2);

void print_coord(struct coord & coords);

bool isPointOnLine(struct coord &lineP1, struct coord &LineP2, struct coord &Point);