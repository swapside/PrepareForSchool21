#include <stdio.h>

int main(void) {
    int A, B, C;

    if (scanf("%d %d %d", &A, &B, &C) == 3 && (getchar() == '\n' || getchar() == EOF)) {
        if ((A < C && C < B) || (B < C && C < A)) {
            printf("1");
        } else {
            printf("0");
        }
    } else {
        printf("n/a");
    }

    return 0;
}
