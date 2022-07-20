/*#include <stdio.h>
#include <stdlib.h>
int del(int x);
int main() {
int x;
scanf("%d", &x);
del(x);

return 0;
}

int del(int x) {
int a, b, c;
a = x%10;
b = (x/10)%10;
c = x/100;
printf("%d%d%d", a, abs(b), abs(c));
return 0;
}*/ 

#include <stdio.h>
int del(int x);
int main() {
int x;
scanf("%d", &x);
del(x);

return 0;
}

int del(int x) {
int a, b, c;
a = x%10;
b = (x/10)%10;
c = x/100;
if (x < 0) {
b *= -1;
c *= -1;
printf("%d%d%d", a, b, c);
} else {
       printf("%d%d%d", a, b, c);
} 
return 0;
}

