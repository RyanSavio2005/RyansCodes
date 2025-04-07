#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Sorting function */
void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int first_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[first_index])
            {
                first_index = j;
            }
        }
        int temp = a[i];
        a[i] = a[first_index];
        a[first_index] = temp;
    }
}


void printelements(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}


int main()
{
    clock_t start, end;
    double cpu_time_used;
    int n=100000;




    int a[n];


    srand(time(0));

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 1000;
        printf("%d\t", a[i]);
    }
    printf("\n");

    start = clock();
    SelectionSort(a, n);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;


    printf("\nSorted elements are:\n");
    printelements(a, n);


    printf("\nTime needed for sorting is: %f seconds\n", cpu_time_used);

    return 0;
}
