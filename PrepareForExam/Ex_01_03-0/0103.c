#include <stdio.h>

int main() {
int first = 3, second = 4;
char c;
if (scanf("%d %d%c", &first, &second, &c) == 3 &&\
    ( c == '\n' || c == EOF || c == '\0')) {
printf("%d", first * second);
} else {
        printf("n/a"); 
}
return 0;
}
