#include <stdio.h>

int a[10][10], visited[10], n, cost = 0;

void takeInput() {
    printf("Enter number of cities: ");
    scanf("%d", &n);
    printf("Enter cost matrix:\n");
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
}

int least(int city) {
    int min = 999, next = -1;
    for (int i = 0; i < n; i++) {
        if (!visited[i] && a[city][i] && a[city][i] < min) {
            min = a[city][i];
            next = i;
        }
    }
    if (next != -1) cost += a[city][next];
    return next;
}

void mincost(int city) {
    visited[city] = 1;
    printf("%d -> ", city + 1);
    int next = least(city);
    if (next == -1) {
        printf("%d", 1);
        cost += a[city][0];
        return;
    }
    mincost(next);
}

int main() {
    takeInput();
    printf("Path:\n");
    mincost(0);
    printf("\nMinimum cost: %d\n", cost);
    return 0;
}
