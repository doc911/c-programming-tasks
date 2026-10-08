#include <stdio.h>

/**
 * Task 1 (Exam #81):
 * Write a short program that reads two integers and prints their sum.
 * Երկու ամբողջ թվերի ներմուծում և գումարի արտածում։
 */
int main(void) {
    int a, b;

    // Read two integers from standard input
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    // Print their sum
    printf("%d\n", a + b);

    return 0;
}
