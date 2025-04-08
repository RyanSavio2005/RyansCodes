#include <stdio.h>
#include <stdlib.h>

// Function to remove duplicates from a sorted array
int removeDuplicates(int* nums, int size) {
    if (size == 0) return size;

    int idx = 0; // Index for the next unique element
    for (int i = 1; i < size; i++) {
        if (nums[i] != nums[idx]) {
            idx++;
            nums[idx] = nums[i];
        }
    }
    return idx + 1; 
}

// Function to compare for sorting
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases
    while (t--) {
        int n;
        scanf("%d", &n); // Read the size of the array
        int* A = (int*)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }

        qsort(A, n, sizeof(int), compare); 

        int newSize = removeDuplicates(A, n); 
        printf("%d\n", newSize); 
        for (int i = 0; i < newSize; i++) {
            printf("%d ", A[i]); // Print distinct elements
        }
        printf("\n");

        free(A); // Free allocated memory
    }
    return 0;
}
