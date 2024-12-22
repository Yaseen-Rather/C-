#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;

    // 1. malloc
    printf("Malloc\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {

        int* p = (int*)malloc(sizeof(int));

        scanf("%d", p);
        sum += *p;
        free(p);
    }

    printf("Sum (malloc): %d\n\n", sum);

    // Reset sum
    sum = 0;

    // 2. calloc
    printf("Calloc\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int* ptr = (int*)calloc(n, sizeof(int));

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }

    printf("Sum (calloc): %d\n\n", sum);

    // 3. realloc
    printf("Realloc\n");
    ptr = realloc(ptr, 2 * sizeof(int));

    printf("Enter new value: ");
    scanf("%d", (ptr + n));
    sum += *(ptr + n);

    printf("Enter new value: ");
    scanf("%d", (ptr + n + 1));
    sum += *(ptr + n + 1);

    printf("Sum (after realloc): %d\n", sum);

    // Free allocated memory
    free(ptr);

    return 0;
}
