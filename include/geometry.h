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
Linestring init_linestring(int size, Point *line);
void append_point(Point point);
void free_linestring(Linestring *line);

#endif
