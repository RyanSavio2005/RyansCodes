#include <stdio.h>
#include <stdlib.h>
#define N 3
void printMatrix(int m[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d\n",m[i][j]);
        }
    }
}
void warshallAlg(int g[N][N])
{
    for(int k=0;k<N;k++)
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
                g[i][j]=g[i][j]||(g[i][k]&&g[k][j]);
        }
    }
}
int main()
{
    int g[N][N]={
                 {0,1,0},
                 {0,0,1},
                 {1,0,0},
                };
    printf("Original Matrix:\n");
    printMatrix(g);
    warshallAlg(g);
    printf("Reachability Matrix:\n");
    printMatrix(g);
    return 0;
}
