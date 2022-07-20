#include <stdio.h>

int main() {
int a, x, b = 0;
char c;
if (scanf("%d%c", &x, &c) == 2 && c == '\n') {
        if (x < 0) {
                x *= -1;
        }
                while (x > 0) {
                        a = x%10;
                        if (a > b) {
                                b = a;
                        }
                        x /= 10;
                } printf("%d", b);
} else {
        printf("n/a");
}
return 0;
}
