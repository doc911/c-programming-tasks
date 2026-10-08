#include <stdio.h>

int main() {
    int n, a, b, c, s;

    scanf("%d", &n);

    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;

    s = a + b + c;

    printf("%d\n", s);

    return 0;
}
