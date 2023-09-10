#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height) {
    int **ptr;
    int i;

    ptr = malloc(height * sizeof(int *));
    if (ptr == NULL) {
        return (NULL);
    }

    for (i = 0; i < height; i++) {
        ptr[i] = malloc(width * sizeof(int));
        if (ptr[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(ptr[j]);
            }
            free(ptr);
            return (NULL);
        }
    }

    return (ptr);
}