#include <stdio.h>

int main(int argc, char **argv) {

    struct pos {
        int x, y;
    };

    struct pos point1 = { .x = 5, .y = 10 };

    printf("point1 x:%d\npoint1 y:%d\n", point1.x, point1.y);
    printf("Size of position struct: %lu\n", sizeof(struct pos));

    // this struct is using bit fields, integer members of nonstandard sizes,
    // you cannot aquire their adress with &
    struct card {
        unsigned int suit: 2;
        unsigned int face_value: 4;
    };

    struct card pick_a_card = { 3, 15 };

    //printf("cannot access adress of card's suit: %d\n", &pick_a_card.suit);

    printf("King of Diamonds: %d %d\n", pick_a_card.suit, pick_a_card.face_value);
    printf("Size of card struct: %lu\n", sizeof(struct card));

    return 0;

}
