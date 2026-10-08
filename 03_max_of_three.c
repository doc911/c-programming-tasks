#include <stdio.h>

/**
 * Task 3 (Exam #83 - Blackboard Problem):
 * Write a short program that reads three integers and prints the maximum value.
 * Երեք ամբողջ թվերից ամենամեծի գտնելը և արտածումը։
 */
int main(void) {
    int a, b, c;

    // Read 3 integers (e.g. 12, 14, 16)
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 1;
    }

    // Step 1: Assume 'a' is the maximum
    int max = a;

    // Step 2: Compare with 'b'
    if (b > max) {
        max = b;
    }

    // Step 3: Compare with 'c'
    if (c > max) {
        max = c;
    }

    // Print the champion value
    printf("%d\n", max);

    return 0;
}
