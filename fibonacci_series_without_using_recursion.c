#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (i = 0; i < n; ++i) {
        if (i <= 1)
            nextTerm = i;
        else {
            nextTerm = a + b;
            a = b;
            b = nextTerm;
        }
        printf("%d, ", nextTerm);
    }
return 0;
}
