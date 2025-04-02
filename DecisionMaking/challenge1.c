#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    // Don't change above this line

    // Write code here
    int x;
    if (num > 5) {
        x = 5;
    }
    else {
        x = 0;
    }
    // Don't change below this line
    printf("x = %d", x);
    return 0;
};