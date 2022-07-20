#include <stdio.h>
#include <stdlib.h>

int max(int *arr, int size);

int main() {
int size = 1;
int *arr = NULL;
int temp;

do { 
arr = (int*) realloc (arr,size * sizeof(int));
     scanf("%d", &temp); 
             if (temp != -1) {
                arr[size - 1] = temp;
                size++;
                } else {
                max(arr, size);
                }
    } while (temp != -1);
return 0;
}

int max(int *arr, int size) {
int hash = arr[0];
for (int i = 1; i < size; i++) {
if(hash < arr[i]) {
        hash = arr[i];
}
}
printf("%d", hash);
return 0;
}
