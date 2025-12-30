#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "geometry.h"

double distance(Point a, Point b) {
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

/* Constructor for Linestring */
Linestring init_linestring(int size, Point *line) {
    Linestring ls;

    ls.length = size;
    ls.capacity = size > 0 ? size : 1;
    ls.points = malloc(ls.capacity * sizeof(Point));

    if (!ls.points) {
        ls.length = 0;
        ls.capacity = 0;
        return ls;
    }

    if (line != NULL && size > 0) {
        memcpy(ls.points, line, size * sizeof(Point));
    }

    return ls;

}



