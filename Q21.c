// wap to print fibonacci sequence 0 1 1 2 3 5 8 13...... n terms and prints the sum of sequence.

#include <stdio.h>

int main() {
    int n, i;
    long t1 = 0, t2 = 1, nextTerm, sum = 0;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci sequence: ");
    for(i = 1; i <= n; i++) {
        printf("%ld ", t1);
        sum += t1;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    printf("\nSum = %ld\n", sum);
    return 0;
}
