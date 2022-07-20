#include <stdio.h>
#include <stdlib.h>
#define NMAX 100000

void input(int *a, int *n);
void output(int *a, int n);
void sort(int *a, int n);

int main() {
    char c;
    int *p = (int*)malloc(NMAX*sizeof(int));
    int n;
    input(p, &n);
    scanf("%c", &c);
    if (c != '\n' || NULL == p) {
        printf("n/a");
        return 0;
    }
    for (int i = 0; i < n - 1; i++) {
        if (p[i] < 0) {
            printf("n/a");
            return 0;
        }
    }
    sort(p, n - 1);
    output(p, n - 1);
    free(p);
}

void input(int *a, int *n) {
    for (int i = 0; i < NMAX; i++) {
        scanf("%d", &a[i]);
        *n += 1;
        if (a[i] == -1) {
            break;
        }
    }
}

void sort(int *a, int n) {
    for (int z = 0; z < n; z++) {
        int t = a[0];
        for (int i = 1; i < n; i++) {
            if (t < a[i]) {
                a[i - 1] = a[i];
                a[i] = t;
            }
        }
    }
}

void output(int *a, int n) {
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d", a[i]);
        } else {
            printf("%d ", a[i]);
        }
    }
}
