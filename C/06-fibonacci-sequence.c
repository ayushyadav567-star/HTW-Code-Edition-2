#include <stdio.h>

int main(void) {
    int terms;
    int first = 0, second = 1;

    printf("How many Fibonacci terms (1-40)? ");
    if (scanf("%d", &terms) != 1 || terms < 1 || terms > 40) {
        printf("Invalid number of terms.\n");
        return 1;
    }

    for (int i = 0; i < terms; i++) {
        printf("%d", first);
        int next = first + second;
        first = second;
        second = next;
        if (i + 1 < terms) {
            printf(" ");
        }

        
    }
    printf("\n");

    return 0;
}
