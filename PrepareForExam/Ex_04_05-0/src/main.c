#include <stdio.h>
#include <math.h>
int main() {
int n, b = 1, a, d = 0;
char c;
scanf("%d", &n);
scanf("%c", &c);
if(c == '\n') {
if(n < 0) n *= -1;
while (n != 0) {
a = n % 10;
if (a % 2 !=  0) {
b *= a;
d++;
}
a = 0;
n = n / 10;
}
if (d > 0) {
printf("%d", b);
} else {
printf("%d", 0);
}
} else {
printf("n/a");
}
return 0;
}
