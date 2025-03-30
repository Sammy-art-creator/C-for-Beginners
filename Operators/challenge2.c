#include <stdio.h>

int main() {
    int a = 1;
    int b = 0;
    int c = 0;

    // Don't change below this line
    int d = (a - b != c) && (c < a);
    printf("d = %d", d);
    return 0;
};