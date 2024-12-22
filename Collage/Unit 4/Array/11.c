#include <stdio.h>

int main() {
    int n, i, searchElement, found = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be searched
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Perform linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == searchElement) {
            printf("Element %d found at index %d.\n", searchElement, i);
            found = 1;
            break;
        }
    }

    // If the element is not found
    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
