#include <stdio.h>
#include <math.h>

int main(void) {
    float radian;

    if (scanf("%f", &radian) == 1 && (getchar() == '\n' || getchar() == EOF)) {
        int degree = round(radian * 57.29);
        printf("%d", degree);
    } else {
        printf("n/a");
    }

    return 0;
}
