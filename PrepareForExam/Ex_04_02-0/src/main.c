#include <stdio.h>

int main() {
    int maximum, a;
    scanf("%d", &maximum);
    scanf("%d", &a);
    while (a != -1) {
        if (a > maximum)
            maximum = a;
        scanf("%d", &a);
    }
    printf("%d", maximum);
    return 0;
}
