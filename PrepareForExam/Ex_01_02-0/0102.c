#include <stdio.h>

int main(void) {
int x1 = 1, x2 = 2;
char c;
if (scanf("%d %d%c", &x1, &x2, &c) == 3 &&
    (c == '\n' || c == EOF || c == '\0')) {
printf("%d", x1 * x2);
} else {
printf("n/a");
}
return 0;
}
