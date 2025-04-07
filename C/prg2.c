#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* QuickSort function */
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);
    return (i + 1);
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

void printelements(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int main() {
    clock_t start, end;
    double cpu_time_used;
    int n=100;
    int a[n];

    srand(time(0));
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100000;
        printf("%d\t", a[i]);
    }
    printf("\n");

    start = clock();
    quickSort(a, 0, n - 1);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nSorted elements are:\n");
    printelements(a, n);

    printf("\nTime needed for sorting is: %f seconds\n", cpu_time_used);

    return 0;
}
