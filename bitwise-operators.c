#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int maximum_and = 0, maximum_or = 0, maximum_xor = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int and_value = a & b;
            int or_value = a | b;
            int xor_value = a ^ b;
            if (and_value < k && and_value > maximum_and) maximum_and = and_value;
            if (or_value < k && or_value > maximum_or) maximum_or = or_value;
            if (xor_value < k && xor_value > maximum_xor) maximum_xor = xor_value;
        }
    }
    printf("%d\n%d\n%d\n", maximum_and, maximum_or, maximum_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
