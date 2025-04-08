#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);  // Read number of test cases
    
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);  // Read n and k
        
        int* q = (int*)malloc(n * sizeof(int));  // Create an array to simulate the queue
        int front = 0;  // Front of the queue
        int back = 0;   // Back of the queue

        // Read the values into the queue
        while (n--) {
            int v;
            scanf("%d", &v);
            q[back++] = v;  // Add to the back of the queue
        }

        int* f = (int*)malloc(k * sizeof(int));  // Array to store the popped elements
        int f_size = 0;  // Current size of the f array

        // Pop the first k elements
        while (k--) {
            f[f_size++] = q[front++];  // Add to f and move the front of the queue
        }

        // Print remaining elements in the queue
        for (int i = front; i < back; i++) {
            printf("%d ", q[i]);
        }

        // Print the popped elements
        for (int i = 0; i < f_size; i++) {
            printf("%d ", f[i]);
        }
        
        printf("\n");  // New line after each test case

        free(q);  // Free the allocated memory for the queue
        free(f);  // Free the allocated memory for f
    }

    return 0;
}
