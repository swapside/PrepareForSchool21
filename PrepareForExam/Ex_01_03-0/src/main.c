#include <stdio.h>

int main() {
int first, second;
char c;
scanf("%d%d", &first, &second);
scanf("%c", &c);
if (c == '\n') {
printf("%d", first * second);
} else {
printf("n/a");
}
return 0;
}
