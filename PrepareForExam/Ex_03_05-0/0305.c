#include <stdio.h>

int main() {
int a, b, c;
char g;
if (scanf("%d %d %d%c", &a, &b, &c, &g) == 4 && \
    (g == '\n' || g == ' ') && ((1 == a || a == 0) && \
    (b == 0 || b == 1) && (c == 0 || c == 1))) { 
        if (a * (b + c) > 0) {
        printf("1");
} 
if (a * (b + c) == 0) {
        printf("0");
}
} else {
        printf("n/a");
}
return 0;
}

