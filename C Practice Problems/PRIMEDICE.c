#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t); // Read number of test cases
    
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b); // Read values of a and b
        
        int sum = a + b; // Calculate the sum
        
        // Check if the sum is one of the known prime numbers
        if (sum == 2 || sum == 3 || sum == 5 || sum == 7 || sum == 11) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }
    
    return 0;
}
