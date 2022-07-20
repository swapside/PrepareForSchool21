#include <stdio.h>
#include <stdlib.h>

int main() {
int count = 0, num, fmax = 0, fmin = 0, cmax, cmin, temp;
int *arr = malloc (10000 * sizeof(int));
char c;
do {
        if (scanf("%d%c", &num, &c) == 2 &&\
                        (c == '\0' || c == ' ' || c == '\n') &&\
                        (num >= 0 || num == -1)) {
            if (num != -1) {
                arr[count] = num;
                count++;
            } else {
                int *arr2 = malloc(count * sizeof(int));
                for (int i = 0; i < count; i++) {
                    arr2[i] = arr[i];
                }
                free(arr);
                int max = arr2[count], min = arr2[0];
                for (int k = 0; k < count; k++) {
                    if (arr2[k] > max) {
                            max = arr2[k];
                    }
                    if (arr2[k] < min) {
                            min = arr2[k];
                    }
                }
                for (int m = 0; fmax != 1; m++) {
                    if (arr2[m] == max) {
                        cmax = m;
                        fmax = 1;
                    }
                }
                for (int n = 0; fmin != 1; n++) {
                    if (arr2[n] == min) {
                        cmin = n;
                        fmin = 1;
                    }
                }
                    //  printf("наименьшее %d\n", min);
                    //  printf("позиция %d \n", cmin);
                    //  printf("наибольшее %d \n", max);
                    //  printf("позиция %d \n", cmax);
                temp = arr2[cmax];
                arr2[cmax] = arr2[cmin];
                arr2[cmin] = temp;
                for (int d = 0; d < count; d++) {
                    printf("%d%s", arr2[d], d == count -1 ? "" : " ");
                }
                free(arr2);
            }
        } else {
                free(arr);
                printf("n/a");
                break;
        }
} while (num != -1);
return 0;
}
