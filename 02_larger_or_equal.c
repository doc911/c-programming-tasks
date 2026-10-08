#include <stdio.h>

/**
 * Task 2 (Exam #82):
 * Write a short program that reads two integers and prints the larger value,
 * or reports that they are equal.
 * Երկու թվերից մեծի արտածում կամ հավասար լինելու հաղորդում (Equal)։
 */
int main(void) {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    if (a > b) {
        printf("%d\n", a);
    } else if (b > a) {
        printf("%d\n", b);
    } else {
        printf("Equal\n");
    }

    return 0;
}
