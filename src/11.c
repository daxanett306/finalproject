#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}
