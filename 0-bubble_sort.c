#include "sort.h"
/**
 * Function: bubble_sort
 * ---------------------
 * Sorts an array of integers in ascending order using the Bubble sort algorithm.
 *
 * array: Pointer to the first element of the array to be sorted
 * size: Size of the array
 *
 * Returns: None
 */

void bubble_sort(int *array, size_t size) {
    int tmp, swapped;
    size_t i, j;

    for (i = 0; i < size - 1; i++) {
        swapped = 0;

        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                swapped = 1;
            }
        }

        if (swapped) {
            for (j = 0; j < size; j++) {
                printf("%d", array[j]);
                if (j < size - 1)
                    printf(", ");
            }
            printf("\n");
        } else {
            break;
        }
    }
}
