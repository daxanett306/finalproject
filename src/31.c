#include <stdio.h>

void main() {
    int i;
    printf("Hello, world!\n");

    for(i = 0; i < 5; i++) {
        if(i % 2 == 0)
            continue;

        printf("%d", i);
    }
}
