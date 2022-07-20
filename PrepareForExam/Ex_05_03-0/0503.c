#include <stdio.h>
#include <stdlib.h>

int main() {
int size = 0, temp;
int *arr = NULL;
char c;
do {
        arr = (int*)realloc(arr,size * sizeof(int));
        if (scanf("%d%c", &temp, &c) == 2 &&\
                        (c == '\0' || c == ' ' || c == '\n') &&\
                        (temp >= 0 || temp == -1)) {
                if (temp != -1) {
                arr[size] = temp;
                size++;      
                } else {
                int *arr2 = (int*)calloc(size, sizeof(int));
                for (int i = 0; i <= size / 2; i++) {
                        arr2[i * 2] = arr[i];
                }
                        for (int j = 0; j < size / 2; j++) {
                                arr2[j * 2 + 1] = arr [size - 1 - j];
                        }
                free(arr);
                for (int i = 0; i < size; i++) {
                printf("%d%s", arr2[i], (i == size - 1 ? "" : " ")); 
                }
                free(arr2);
                }
        } else {
                free(arr);
                printf("n/a");
                break;
        }
} while (temp != -1);
return 0;
}
