#include <stdio.h>

int main() {
    int n, a, b, c, sum;

    scanf("%d", &n);

    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;

    sum = a + b + c;

    printf("%d\n", sum);

    return 0;
}
