#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int *arr, int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i; 
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j; 
            }
        }
        if (min != i) {

            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    selection_sort(arr, n);
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

// Path: sorting_algorithms/insertion_sort.c