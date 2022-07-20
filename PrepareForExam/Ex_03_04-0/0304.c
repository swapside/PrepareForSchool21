#include <stdio.h>

int main() {
int a, b, c;
char g;
if (scanf("%d %d %d%c", &a, &b, &c, &g) == 4 &&\
    g == '\n') {
/*for (; (c > a && c < b) || (c < a && c > b);) {
printf("1");
break;
}
for (; (c > a && c > b) || ( c < a && c < b);) {
        printf("0");
        break;
    }
} else {
        printf("n/a");
}
return 0;
}*/

(c > a && c < b) || (c < a && c > b) ? printf("1") : printf("0");
} else {
printf("n/a");
}
return 0;
}
