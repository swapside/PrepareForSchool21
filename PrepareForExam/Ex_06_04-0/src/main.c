#include <stdio.h>
#include <stdlib.h>

void allocate(int*** arr, int n);
void free_arr(int*** arr, int n);
void input(int** a, int n);
void output(int** arr, int n);
int input_length(int* n);

int main() {
    int err = 0;
    int** array;
    int n;
    err = input_length(&n);
    if (err != 0 || n == 0) {
        printf("n/a");
    } else {
        allocate(&array, n);
        input(array, n);
        output(array, n);
        free_arr(&array, n);
    }
    return 0;
}

void allocate(int*** arr, int n) {
    int** temp;
    temp = calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++) {
        temp[i] = calloc(n, sizeof(int));
    }
    *arr = temp;
}

void free_arr(int*** arr, int n) {
    int** temp = *arr;
    for (int i = 0; i < n; i++) {
        free(temp[i]);
    }
    free(temp);
}

int input_length(int* n) {
    int err = 0;
    char c;
    if (scanf("%d%c", n, &c) != 2 || c != '\n')
        err = 1;
    return err;
}

void input(int** a, int n) {
    int count = 1;
    int i = 0;
    int j = -1;
    while (count <= n*n) {
        for (j += 1; j < n && a[i][j] == 0; j++) {
            a[i][j] = count;
            count++;
        }
        j--;
        for (i += 1; i < n && a[i][j] == 0; i++) {
            a[i][j] = count;
            count++;
        }
        i--;
        for (j -= 1; j >= 0 && a[i][j] == 0; j--) {
            a[i][j] = count;
            count++;
        }
        j++;
        for (i -= 1; i >= 0 && a[i][j] == 0; i--) {
            a[i][j] = count;
            count++;
        }
        i++;
    }
}

void output(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n - 1) {
                if (i == n - 1) {
                    printf("%d", arr[i][j]);
                } else {
                    printf("%d\n", arr[i][j]);
                }
            } else {
                printf("%d ", arr[i][j]);
            }
        }
    }
}
