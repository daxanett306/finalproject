#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int x = rand() % 10 + 1;
    printf("Random number: %d\n", x);
    return 0;
}
