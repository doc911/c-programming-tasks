#include <stdio.h>

/**
 * Task 4 (Exam #84):
 * Write a short program that reads an integer and prints whether it is even or odd.
 * Ամբողջ թվի զույգ կամ կենտ լինելը (Even or Odd)։
 */
int main(void) {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
