#include <stdio.h>

int main() {
    int num, digit;

    scanf("%d", &num);

    digit = num % 10;

    printf("%d\n", digit);

    return 0;
}
