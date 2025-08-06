#include <stdio.h>
#include <stdlib.h>
void InsertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
          a[j+1]=key;
    }

}
void printElements(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[]={9,7,5,4,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Original Array:\n");
    printElements(a,n);
    InsertionSort(a,n);
    printf("Sorted Array:\n");
    printElements(a,n);
    return 0;
}
