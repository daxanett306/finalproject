#include <stdio.h>

int main() {
    int i;
    printf("Enter how many numbers you want to input: ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 0; i < i; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
