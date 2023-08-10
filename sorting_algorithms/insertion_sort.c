// insertion_sort.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_sort(int *arr, int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            // shift
            arr[j + 1] = arr[j];
            j--;
        }
        // insert
        arr[j + 1] = temp;
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
    insertion_sort(arr, n);
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

// Path: sorting_algorithms/selection_sort.c