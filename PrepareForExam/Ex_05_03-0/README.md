# Exam_05_03. Sequence output 
The russian version of the task can be found in the repository.

## Task

| Exam_05_03 | |
| ------ | ------ |
| Level: | 3 |
| Topics: | Dynamic arrays. |
| Directory for the solution: | src/ |
| Solution files: | main.c |
| Input data: | Standard input stream (stdin) |
| Output data: | Standard output stream (stdout) |

Create a program that outputs elements of the `X = (X_1, X_2, X_3, ..., X_n)` sequence in the following order: `X_1 X_n X_2 X_{n-1} ...`. The `X` sequence consists of non-negative integers and is specified in the standard input stream–stdin; the elements of the sequence are separated by spaces; the end of the sequence is -1, which marks the end of the sequence and is not one of its elements. There should be no newline break at the end of the response. Check the validity of the entered data. In case of any error, output "n/a".

> **Note:** There must not be a space after the last displayed element.

> There can be any size of the sequence

## Examples

| Input | Output |
| ------ | ------ |
| 1 2 3 -1 | 1 3 2 |
| 1 2 3 4 5 6 -1 | 1 6 2 5 3 4 |
| -1 |  |

> **Attention:** We kindly remind you that the procedure for testing your program includes an analysis of the code style. Please look in the "materials /" folder. Also, be sure to check your program for memory leaks!
