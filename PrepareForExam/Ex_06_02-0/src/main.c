#include <stdio.h>
#include <stdlib.h>

int row_col_qty_input(int *qty_row, int *qty_col);
int row_input(int *a, int n);
int matrix_input(int **matrix, int qty_row, int qty_col);

void row_output(int *a, int n);
void matrix_output(int **matrix, int qty_row, int qty_col);

int row_w_max(int **matrix, int qty_row, int qty_col);
int row_w_min(int **matrix, int qty_row, int qty_col);
void swap_rows(int **matrix, int **result, int qty_row, int qty_col, int rownum_w_max, int rownum_w_min);

// START OF THE PROGRAM
int main(void) {
    int qty_row, qty_col;

    if (row_col_qty_input(&qty_row, &qty_col) == 1) {
        // Memory allocation
        int **matrix = malloc(qty_row * sizeof(int*));
        int *matrix_values = malloc(qty_row * qty_col * sizeof(int));

        for (int i = 0; i < qty_row; i++) {
            matrix[i] = matrix_values + qty_col * i;
        }

        // Matrix input & processing
        if (matrix != NULL && matrix_values != NULL && matrix_input(matrix, qty_row, qty_col) == 1) {
            // Memory allocation for result matrix
            int **result = malloc(qty_row * sizeof(int*));
            int *result_values = malloc(qty_row * qty_col * sizeof(int));

            for (int i = 0; i < qty_row; i++) {
                result[i] = result_values + qty_col * i;
            }

            if (result != NULL && result_values != NULL) {
                int rownum_w_max = row_w_max(matrix, qty_row, qty_col);
                int rownum_w_min = row_w_min(matrix, qty_row, qty_col);
                swap_rows(matrix, result, qty_row, qty_col, rownum_w_max, rownum_w_min);

                matrix_output(result, qty_row, qty_col);
            } else {
                printf("n/a");
            }

            // Memory cleaning
            free(result_values);
            free(result);
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

// SWAP ROWS WITH MIN AND MAX
void swap_rows(int **matrix, int **result, int qty_row, int qty_col, int rownum_w_max, int rownum_w_min) {
    for (int i = 0; i < qty_row; i++) {
        for (int j = 0; j < qty_col; j++) {
            if (i != rownum_w_min && i != rownum_w_max) {
                result[i][j] = matrix[i][j];
            }
            if (i == rownum_w_max) {
                result[i][j] = matrix[rownum_w_min][j];
            }
            if (i == rownum_w_min) {
                result[i][j] = matrix[rownum_w_max][j];
            }
        }
    }
}

// FIND ROW WITH MIN ELEMENT
int row_w_min(int **matrix, int qty_row, int qty_col) {
    int min = matrix[0][0], row_w_min = 0;

    for (int i = 0; i < qty_row; i++) {
        for (int j = 0; j < qty_col; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                row_w_min = i;
            }
        }
    }

    return row_w_min;
}

// FIND ROW WITH MAX ELEMENT
int row_w_max(int **matrix, int qty_row, int qty_col) {
    int max = matrix[0][0], row_w_max = 0;

    for (int i = 0; i < qty_row; i++) {
        for (int j = 0; j < qty_col; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                row_w_max = i;
            }
        }
    }

    return row_w_max;
}

// MATRIX INPUT
int matrix_input(int **matrix, int qty_row, int qty_col) {
    int no_error_flag = 1;

    for (int i = 0; i < qty_row; i++) {
        if (row_input(matrix[i], qty_col) == 1) {
            continue;
        } else {
            no_error_flag = 0;
            break;
        }
    }

    return no_error_flag;
}

// ARRAY / ROW INPUT
int row_input(int *a, int n) {
    int no_error_flag = 1;
    char symbol;

    for (int i = 0; i < n; i++) {
        if (scanf("%d%c", (a + i), &symbol) == 2 && (symbol == ' ' || symbol == '\n' || symbol == EOF)) {
            continue;
        } else {
            no_error_flag = 0;
            break;
        }
    }

    if (symbol != '\n' && symbol != EOF) {
        no_error_flag = 0;
    }

    return no_error_flag;
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
int row_col_qty_input(int *qty_row, int *qty_col) {
    int no_error_flag = 0;

    if (scanf("%d %d", qty_row, qty_col) == 2 && (getchar() == '\n' || getchar() == EOF)
                                              && *qty_row > 0 && *qty_col > 0) {
        no_error_flag = 1;
    }

    return no_error_flag;
}
