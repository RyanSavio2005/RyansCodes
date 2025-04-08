#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int countCommonElements(int A[], int B[], int N) {
    qsort(A, N, sizeof(int), compare);
    qsort(B, N, sizeof(int), compare);
    
    int i = 0, j = 0, count = 0;

    while (i < N && j < N) {
        if (A[i] == B[j]) {
            count++;
            i++;
            j++;
        } else if (A[i] < B[j]) {
            i++;
        } else {
            j++;
        }
    }
    return count;
}

int main() {
    int T, N;
    scanf("%d", &T);
    
    for (int t = 0; t < T; ++t) {
        scanf("%d", &N);
        int A[N], B[N];
        
        for (int i = 0; i < N; ++i) {
            scanf("%d", &A[i]);
        }
        
        for (int i = 0; i < N; ++i) {
            scanf("%d", &B[i]);
        }
        
        printf("%d\n", countCommonElements(A, B, N));
    }
    
    return 0;
}