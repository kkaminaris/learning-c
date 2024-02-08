#include <stdio.h>

int main(int argc, char **argv) {
    struct point;
    struct point *p1;
    struct point {
        int x, y;
    };
    struct point p = { 3, 4 };
    p1 = &p;
    p.x = 5;
    printf("point coordinates: %d %d\n", p1->x, p1->y);
    printf("my point is at adress %p\n", p1);
    return 0;
}
