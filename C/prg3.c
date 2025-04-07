#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Insertion Sort function */
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printelements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {
    clock_t start, end;
    double cpu_time_used;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    srand(time(0));

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
        printf("%d\t", arr[i]);
    }
    printf("\n");

    start = clock();
    insertionSort(arr, n);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nSorted elements are:\n");
    printelements(arr, n);

    printf("\nTime needed for sorting is: %f seconds\n", cpu_time_used);

    return 0;
}
