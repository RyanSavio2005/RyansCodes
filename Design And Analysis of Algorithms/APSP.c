#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define INF 99999
#define V 4
void printSolution(int dist [][V]);
void floydAlgorithm(int dist [][V])
{
    int i,j,k;
    for(k=0;k<V;k++)
    {
       for(i=0;i<V;i++)
       {
           for(j=0;j<V;j++)
           {
               if(dist[i][j]>dist[i][k]+dist[k][j])
                dist[i][j]=dist[i][k]+dist[k][j];
           }
       }
    }
    printSolution(dist);
}
void printSolution(int dist [][V])
{
    printf("Solution Matrix:\n");
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            if(dist[i][j]==INF)
                printf("%s\t",INF);
            else
                printf("%d\t",dist[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int dist[V][V]={
                    {0,3,INF,7},
                    {8,0,2,INF},
                    {5,INF,0,1},
                    {2,INF,INF,0}
                   };
    floydAlgorithm(dist);
    return 0;
}
