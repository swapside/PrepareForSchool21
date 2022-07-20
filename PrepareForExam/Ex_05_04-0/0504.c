#include <stdio.h>
#include <stdlib.h>

int main() {
int count = 0, num, cock, coun = 0;
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
                cock = 0;
                for(int k = 0; k < count; k++) {
                    if (arr[i] == arr2[k]) {
                        cock++;
                    }
                }
                if (cock == 0) {
                    arr2[coun] = arr[i];
                    coun++;
                }
            }
            free(arr);
            for(int l = 0; l < coun; l++) {
                printf("%d ", arr2[l]);
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