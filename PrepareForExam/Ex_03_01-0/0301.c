#include <stdio.h>
#include <math.h>

int main() {
int p = 21500;
double v, rad;
char c;
if (scanf("%lf%c", &rad, &c) == 2 &&\
    (c == '\n' || c == '\0' || c == EOF) && rad > 0) {
v = (4./3.) * M_PI * pow(rad, 3);
printf("%.0lf", v * p);
} else {
        printf("n/a");
}
return 0;
}
