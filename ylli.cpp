#include <stdio.h>

int main() {
    int n;

    printf("Jepni numrin e rreshtave: ");
    scanf("%d", &n);

    // Loop për të printuar rreshtat
    for (int i = 0; i < n; i++) {
        // Printo hapsirat e para
        for (int j = 0; j < n - i - 1; j++) {
            printf("- ");
        }

        // Printo yjet
        for (int k = 0; k < i + 1; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}