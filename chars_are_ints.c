#include <stdio.h>

int main(int argc, char** argv) {
    char ch1 = 'm';
    char ch2 = '\161';
    char ch3 = 'q';
    printf("Char: %c is actually int: %d\n", ch1, ch1);
    printf("Char: %c is actually int: %d\n", ch2, ch2);
    printf("Char: %c is actually int: %d\n", ch3, ch3);
}
