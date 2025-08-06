#include <stdio.h>

void sortItems(double r[], int w[], int p[], int n) {
    for(int i = 0; i < n - 1; i++) {  // Fix: n-1 instead of n to avoid out-of-bounds access
        for(int j = 0; j < n - i - 1; j++) {  // Bubble sort optimization
            if(r[j] < r[j + 1]) {
                // Swap ratios
                double temp_r = r[j];
                r[j] = r[j + 1];
                r[j + 1] = temp_r;

                // Swap weights
                int temp_w = w[j];
                w[j] = w[j + 1];
                w[j + 1] = temp_w;

                // Swap profits
                int temp_p = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp_p;
            }
        }
    }
}

double knapsack(int p[], int w[], int n, int cap) {
    double r[n];
    int cw = 0;           // Current weight
    double total = 0.0;   // Total profit

    for(int i = 0; i < n; i++) {
        r[i] = (double)p[i] / w[i];
    }

    sortItems(r, w, p, n);

    printf("Item\tWeight\tProfit\tRatio\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%.2f\n", i + 1, w[i], p[i], r[i]);
    }

    for(int i = 0; i < n; i++) {
        if(cw + w[i] <= cap) {
            total += p[i];
            cw += w[i];
        } else {
            int rem = cap - cw;
            total += p[i] * ((double)rem / w[i]);
            break;
        }
    }

    return total;
}

int main() {
    int n = 3, cap = 20;
    int w[] = {10, 15, 18};  // Fix: use [] instead of = {}
    int p[] = {15, 24, 25};
    double max = knapsack(p, w, n, cap);
    printf("Maximum Profit: %.2f\n", max);
    return 0;
}

