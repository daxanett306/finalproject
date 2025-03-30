#include <stdio.h>

int main() {
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("Error: The number of elements must be greater than 0.\n");
        return 1;
    }

    for (i = 0; i < i; ++i) {
        printf("*\n");
    }
    return 0;
}
