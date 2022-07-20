#include <stdio.h>
#include <stdlib.h>

int **alloc(int x, int y);
void array_free(int **a, int x);
void array_in(int x, int y);
void array_print(int **a, int x, int y);

int main () {
        int x, y;
        scanf("%d %d", &x, &y);
        alloc(x, y);
        array_in(x, y);
        array_print(**a, x, y);


return 0;
}

int **alloc(int x, int y) {
       int **a = (int**)malloc(x * sizeof(int*));
        for (int i = 0; i < x; i++) {
                a[i] = (int*)malloc(y * sizeof(int));
        }
return 0;
}

void array_free(int **a, int x) {
for (int i = 0; i < x; i++) {
        free(a[i]);
}
free(a);
}

void array_in(int x, int y) {
int **a = alloc(x, y);
int temp;
for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
                scanf("%d", &temp);
                a[i][j] = temp;
        }
}
}

void array_print(int **a, int x, int y) {
for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
                printf("%d", a[i][j]);
        }
        printf("\n");
        }
}
