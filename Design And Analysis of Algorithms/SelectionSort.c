#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void SelectionSort(int a[], int n)
{
    int first_index, i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        first_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[first_index])
            {
                first_index = j;
            }
        }
        // Swap only if needed
        if (first_index != i)
        {
            temp = a[i];
            a[i] = a[first_index];
            a[first_index] = temp;
        }
    }
}

void printElements(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    clock_t start,end;
    double exec_time;
    int i,j,temp;
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Original Array:\n");
    printElements(a,n);
    SelectionSort(a,n);
    printf("Elements after sorting:\n");
    printElements(a,n);
    return 0;
}
