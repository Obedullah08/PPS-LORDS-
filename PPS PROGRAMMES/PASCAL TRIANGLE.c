
#include <stdio.h>

int main() {
    int i, j, space, n = 5;

    for (i = 0; i < n; i++) {
        for (space = 0; space < n - i - 1; space++) {
            printf(" ");
        }

        int num = 1;

        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
