#include <stdio.h>
#include <stdlib.h>

int main() {
int count = 0, num, fmax = 0, fmin = 0;
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
                    fmax = k;
                }
                if (arr2[k] < min) {
                    min = arr2[k];
                    fmin = k;
                }
            }
            arr2[fmax] = min;
            arr2[fmin] = max;
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
