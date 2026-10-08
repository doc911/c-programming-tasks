#include <stdio.h>

/**
 * Task 5 (Exam #85):
 * Write a short program that reads an integer and prints whether it is
 * positive, negative, or zero.
 * Թվի դրական, բացասական կամ զրո լինելը (Positive, Negative, or Zero)։
 */
int main(void) {
    int n;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n > 0) {
        printf("Positive\n");
    } else if (n < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}
