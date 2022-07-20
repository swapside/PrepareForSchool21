# Exam_05_01. Dot product 
The russian version of the task can be found in the repository.

## Task

| Exam_05_01 | |
| ------ | ------ |
| Level: | 3 |
| Topics: | Dynamic arrays. |
| Directory for the solution: | src/ |
| Solution files: | main.c |
| Input data: | Standard input stream (stdin) |
| Output data: | Standard output stream (stdout) |

Create a program that performs scalar multiplication of two vectors of an n-dimensional space. 
A positive integer n which denotes the dimension of the space is specified through the input 
stream–stdin; then follow 2 lines: n integer coordinates of the first vector and n integer 
coordinates of the second one, separated by a space. Output the result of calculations to 
the standard output stream–stdout. There should be no newline break at the end of the response. 
Check the validity of the entered data. In case of any error, output "n/a".

![vector_note](misc/images/eng/vector_note.png)

> There can be any size of the sequence

## Examples

| Input | Output |
| ------ | ------ |
| 1<br/>7<br/>3 | 21 |
| 3<br/>1 2 3<br/>1 2 3 | 14 |

> **Attention:** We kindly remind you that the procedure for testing your program includes an analysis of the code style. Please look in the "materials /" folder. Also, be sure to check your program for memory leaks!
