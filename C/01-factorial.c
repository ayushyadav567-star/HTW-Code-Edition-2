#include <stdio.h>

int main(void) {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer (0-20): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%d! = %llu\n", n, factorial);
    return 0;
}
