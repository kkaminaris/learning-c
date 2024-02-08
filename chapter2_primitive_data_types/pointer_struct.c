#include <stdio.h>

int main(int argc, char **argv) {
    struct point {
        int x, y, z, a, b, c;
    };
    struct point p1 = { 3, 4 };
    struct point *p = &p1;
    printf("point 1 coordinates: %d %d\n", p1.x, p1.y);
    printf("point 1 coordinates: %d %d\n", p->x, p->y);
    struct point p2 = *p;
    printf("point 2 coordinates: %d %d\n", p2.x, p2.y);
    p2.x = 5;
    printf("\npoint 1 coordinates: %d %d\n", p1.x, p1.y);
    printf("point 2 coordinates: %d %d\n", p2.x, p2.y);

    printf("size of point struct: %lu\n", sizeof(p1));
    printf("size of point struct pointer: %lu\n", sizeof(p));
    return 0;
}
