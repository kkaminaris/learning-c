#include <stdio.h>

int main(int argc, char** argv) {
    char* str1 = "tutti fruiti ice cream";
    char* str2 = "tutti " "fruiti" " ice ""cream";
    printf("A single string: %s\nA concatenated string: %s\n", str1, str2);
    char* str3 = "\"Hello world!\"";
    printf("string in string: %s\n", str3);
    char* str4 = "Today's special is a pastrami sandwich on rye bread with \
a potato knish and a cherry soda.";
    printf("multi line string: %s\n", str4);
    char* str5 = "before\fafter";
    printf("%s\n", str5);
    return 0;
}
