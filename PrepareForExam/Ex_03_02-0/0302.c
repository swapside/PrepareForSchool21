#include <stdio.h>

int main() {
double a, res, radi = 57.29;
char c;
if (scanf("%lf%c", &a, &c) == 2 &&\
    c == '\n') {
res = a * radi;
printf("%.0lf", res);
} else {
        printf("n/a");
}
return 0;
}
