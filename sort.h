#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

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
