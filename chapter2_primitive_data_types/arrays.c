#include <stdio.h>
#include <stdlib.h>

// can have array of size 0 as a GNU extension
// only as the last member of a struct
// this way we can have an array of dynamic size
struct array {
    int size;
    int contents[0];
};

struct array* foo(int x) {
    struct array *tmp;

    tmp = malloc(sizeof(int) + x * sizeof(int));

    tmp->size = x;
    for (int i=0; i<x; i++) {
        tmp->contents[i] = i;
    }

    return tmp;
}

int main(int argc, char **argv) {

    int my_array[2];

    printf("first element: %d\n", my_array[1]);
    printf("size of my array: %lu\n", sizeof(my_array));

    struct array *dyn_array = foo(18);

    printf("\nfirst element: %d\n", dyn_array->contents[1]);
    printf("dyn_array.size = %d\n", dyn_array->size);
    printf("last element: %d\n", dyn_array->contents[dyn_array->size - 1]);
    printf("after last element: %d\n", dyn_array->contents[dyn_array->size]);
    printf("size of dynamic array: %lu\n", sizeof(*dyn_array));

    return 0;

}
