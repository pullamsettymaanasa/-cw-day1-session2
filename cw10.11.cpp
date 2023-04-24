#include <stdio.h>

int main() {
    int n = 4;
    float current_sum = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            current_sum += j;
            printf("%.1f ", current_sum/10);
        }
        printf("\n");
    }

    return 0;
}
