#include <stdio.h>
#include <stdlib.h>

void row_output(int *a, int n);
int row_input(int *a, int n);
void swap_num( int *a, int *b);

int main() {
    int a = 1, b = 2;
    swap_num(&a, &b);
    printf("a = %d, b = %d", a, b);

    /*int *a = malloc (n * sizeof(int));

    if(row_input(a, n) == 1) {
        row_output(a, n);
    } else {
        printf("n/a");
    }

    free (a);*/
    return 0;
}

// SWAP TWO NUMBERS
void swap_num(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// ARRAY / ROW INPUT
int row_input(int *a, int n) {
    int no_error_flag = 1;
    char symbol;

    for(int i = 0; i < n; i++) {
        if(scanf("%d%c", (a + i), &symbol) == 2 && (symbol == ' ' || symbol == '\n' || symbol == EOF)) {
            continue;
        } else {
            no_error_flag = 0;
            break;
        }
    }

    if(symbol != '\n' && symbol != EOF) {
        no_error_flag = 0;
    }

    return no_error_flag;
}

// ARRAY / ROW OUTPUT
void row_output(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d%s", a[i], (i == (n - 1) ? "": " "));
    }
}

/*
if (matrix != NULL && matrix_values != NULL) {
            for (int i = 0; i < qty_row; i++) {
                for (int j = 0; j < qty_col; j++) {
                    matrix[i][j] = i + j;
                }
            }

            matrix_output(matrix, qty_row, qty_col);
        }
*/