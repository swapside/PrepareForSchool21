#include <stdlib.h>
#include <stdio.h>

int main() {
int size = 0, temp;
int *arr = NULL;
char c;
do {
arr = (int*)realloc(arr, size * sizeof(int));
  if (scanf("%d%c", &temp, &c) == 2 &&\
            (c == '\n' || c == '\0' || c == ' ') &&\
            (temp >= 0 || temp == -1)) {
  if  (temp != -1) {
    arr[size] = temp;
    size++;
  } else {
    int *arr2 = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
      arr2[i] = arr[size - 1 - i];
      printf("%d%s", arr2[i], i == size - 1 ? "" : " ");
    }
    free(arr);
    free(arr2);
  }
  } else {
  printf("n/a");
  free(arr);
  break;
  }
} while ( temp != -1);
return 0;
}
