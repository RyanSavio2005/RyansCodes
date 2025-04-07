#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000

int a[SIZE], n = SIZE;

// Function to read elements (random numbers)
void read_elements() {
    printf("Reading elements:\n");
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 10000; // Limiting range for better testing
    }
}

// Function to perform Bubble Sort
void bubble_sort() {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// Function to perform Binary Search
int binary_search() {
    int low = 0, high = n - 1, mid, key, flag = 0;
    clock_t start, end;
    double exe_time;

    printf("Enter the key element:\n");
    scanf("%d", &key);

    start = clock();
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            printf("Element found!\n");
            flag = 1;
            break;
        } else if (key > a[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    end = clock();

    exe_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Binary Search Execution Time: %lf seconds\n", exe_time);

    return flag;
}

// Main function
int main() {
    srand(time(0)); // Seed for random numbers

    clock_t start, end;
    double total_time;

    start = clock();

    read_elements();
    bubble_sort();

    end = clock();
    total_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Sorting Execution Time: %lf seconds\n", total_time);

    start = clock();
    int found = binary_search();
    end = clock();

    total_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Total Execution Time (Binary Search + Sorting): %lf seconds\n", total_time);

    if (found) {
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }

    return 0;
}
