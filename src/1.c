#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = rand() % 10 + 1;
    printf("Random number between 1 and 10: %d\n", num);
    return 0;
}
