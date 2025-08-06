#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int partition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-;
    for(int j=0;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
        }
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    int temp=a[i+1];
    a[i+1]=a[high];
    a[high]=temp;
    return i+1;
}
void quickSort(int a[],int low[],int high)
{
    if(low<high)
    {
        int pi=partition(a,low,pi-1);
        quickSort(a,low,pi-1);
        quickSort(a)
    }
}
