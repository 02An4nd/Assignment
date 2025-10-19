#include <stdio.h>
#include "arraylib.h"

int main(void) {
    int a[] = {3, 1, 4, 1, 5};
    int n = 5;

    printf("Original Array: ");
    displayArray(a, n);

    printf("Max at index %d\n", findMaxIndex(a, n));
    printf("Min at index %d\n", findMinIndex(a, n));
    printf("Average = %.2f\n", findAverage(a, n));

    reverseArray(a, n);
    printf("Reversed Array: ");
    displayArray(a, n);

    sortArray(a, n);
    printf("Sorted Array: ");
    displayArray(a, n);

    int val = 4;
    int idx = linearSearch(a, n, val);
    if (idx != -1)
        printf("Value %d found at index %d\n", val, idx);
    else
        printf("Value %d not found\n", val);

    return 0;
}
