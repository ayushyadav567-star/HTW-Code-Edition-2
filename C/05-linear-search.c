#include <stdio.h>

int main(void) {
    int n, target;
    int values[100];
    int found_at = -1;

    printf("How many integers (1-100)? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid count.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter the value to find: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    //changes
    for (int i = 0; i <= n - 1; i++) {
        if (values[i] == target) {
            found_at = i;
            break;
        }
    }

    if (found_at >= 0) {
        printf("Found at index %d\n", found_at);
    } else {
        printf("Not found\n");
    }

    return 0;
}
