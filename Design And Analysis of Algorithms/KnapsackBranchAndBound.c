#include <stdio.h>
#define max 100

int n, i, j, temp, tempV, capacity;
int W[max], v[max];     // W: weights, v: values
float r[max], tempR;
int maxprof = 0;

// Sort items by value-to-weight ratio (descending)
void sortItems()
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (r[j] < r[j + 1])
            {
                // Swap weights
                temp = W[j];
                W[j] = W[j + 1];
                W[j + 1] = temp;

                // Swap values
                tempV = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tempV;

                // Swap ratios
                tempR = r[j];
                r[j] = r[j + 1];
                r[j + 1] = tempR;
            }
        }
    }
}

// Recursive 0/1 knapsack
void knapsack(int l, int cw, int cp)
{
    if (cw > capacity)
        return;

    if (cp > maxprof)
        maxprof = cp;

    if (l == n)
        return;

    // Include item l
    knapsack(l + 1, cw + W[l], cp + v[l]);

    // Exclude item l
    knapsack(l + 1, cw, cp);
}

int main()
{
    printf("Enter the number of items:\n");
    scanf("%d", &n);

    printf("Enter the capacity of the knapsack:\n");
    scanf("%d", &capacity);

    // Sample hardcoded values
    W[0] = 5; v[0] = 25;
    W[1] = 3; v[1] = 12;
    W[2] = 4; v[2] = 40;
    W[3] = 7; v[3] = 42;

    for (i = 0; i < n; i++)
        r[i] = (float)v[i] / W[i];

    sortItems();           // Optional: Sort by value-to-weight ratio
    knapsack(0, 0, 0);     // Solve 0/1 knapsack

    printf("Maximum profit is: %d\n", maxprof);

    return 0;
}
