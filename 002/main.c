#include <stdio.h>

long long factorial(long long n) {
    if (n == 0 || n == 1) return 1;

    return factorial(n - 1) * n;
}

double C(int n, int m) {
    return 1.0 * factorial(n) / factorial(m) / factorial(n - m);
}


int main() {
    long long n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%.0lf ", C(i, j));
        }
        printf("\n");
    }

    return 0;
}
