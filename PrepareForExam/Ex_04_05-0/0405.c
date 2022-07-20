#include <stdio.h>

int main() {
int a = 0, b, x, k = 0;
char c;
if (scanf("%d%c", &x, &c) == 2 && c == '\n') {
if (x < 0) {
        x *= -1;
}
do {
        a = x%10;
        x /= 10;
        if (a%2 != 0) {
            b *= a;
            k++;
        }
} while (x > 0);
if (k == 0) {
        printf("%d", k);
} else {
        printf("%d", b);
}
} else {
        printf("n/a");
}
return 0;
}
