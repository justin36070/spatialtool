#ifndef GEOMETRY_H
#define GEOMETRY_H

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    int length;
    int capacity;
    Point *points;
} Linestring;

double distance(Point a, Point b);

#endif
