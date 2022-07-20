#include <stdio.h>
#include <stdlib.h>

int num_input(int *num);

void row_output(int *a, int n);
void matrix_output(int **matrix, int qty_row, int qty_col);
void matrix_fill(int **matrix, int num, int col, int row, int count, int sign);

// START OF THE PROGRAM
int main(void) {
    int num;

    if (num_input(&num) == 1) {
        // Memory allocation
        int **matrix = malloc(num * sizeof(int*));
        int *matrix_values = malloc(num * num * sizeof(int));

        for (int i = 0; i < num; i++) {
            matrix[i] = matrix_values + num * i;
        }

        // Matrix input & processing
        if (matrix != NULL && matrix_values != NULL) {
            int count = 0, sign = 1;
            matrix_fill(matrix, num, 0, num, count, sign);
            matrix_output(matrix, num, num);
        } else {
            printf("n/a");
        }


        // Memory cleaning
        free(matrix_values);
        free(matrix);
    } else {
        printf("n/a");
    }

    return 0;
}

// FILL MATRIX WITH ELEMENTS
void matrix_fill(int **matrix, int num, int col, int row, int count, int sign) {
    if (sign > 0) {
        for (int i = col; i < num; i++) {
            matrix[i][col] = count++;
        }
        for (int i = row; i < num; i++) {
            matrix[row][i] = count++;
        }
        sign = -sign;
        matrix_fill((matrix + (col + 1) * (row + 1 - num)), num - 1, num - col - 1, row - num, count, sign);
    } else {
        for (int i = col - 1; i > 0; i--) {
            matrix[i][col - 1] = count++;
        }
        for (int i = row; i > 0; i--) {
            matrix[row][i] = count++;
        }
        sign = -sign;
        matrix_fill((matrix + (col + 1) * (row + 1 - num)), num - 1, num - col - 1, row - num, count, sign);
    }
}

// MATRIX OUTPUT
void matrix_output(int **matrix, int qty_row, int qty_col) {
    for (int i = 0; i < qty_row; i++) {
        row_output(matrix[i], qty_col);
        printf("%s", (i == (qty_row - 1) ? "": "\n"));
    }
}

// ARRAY / ROW OUTPUT
void row_output(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d%s", a[i], (i == (n - 1) ? "": " "));
    }
}

// ROW & COLUMNS QTY INPUT
int num_input(int *num) {
    int no_error_flag = 0;

    if (scanf("%d", num) == 1 && (getchar() == '\n' || getchar() == EOF) && *num > 0) {
        no_error_flag = 1;
    }

    return no_error_flag;
}
