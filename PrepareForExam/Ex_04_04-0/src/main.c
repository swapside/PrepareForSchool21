#include <stdio.h>

int max_digit(int number);
int input(int* number);

int main() {
    int number, flag;
    flag = input(&number);
    if (!flag)
        printf("%d", max_digit(number));
    else
        printf("n/a");
    return 0;
}

int input(int* number) {
    int c, flag = 0;
    if (!scanf("%d", number))
        flag = 1;
    c = getchar();
    if (!flag && c != '\n' && c != EOF)
        flag = 1;
    return flag;
}

int max_digit(int number) {
    int digit, max;
    if (number < 0)
        number = -number;
    max = number % 10;
    while (number > 0) {
        digit = number % 10;
        if (digit > max)
            max = digit;
        number = number / 10;
    }
    return max;
}

