# Exam_04_01. Binomial coefficients 
The russian version of the task can be found in the repository.

## Task

| Exam_04_01 | |
| ------ | ------ |
| Level: | 3 |
| Topics: | Basic control structures (sequence, branch, loop). |
| Directory for the solution: | src/ |
| Solution files: | main.c |
| Input data: | Standard input stream (stdin) |
| Output data: | Standard output stream (stdout) |

Create a program that performs the output to the standard stream–stdout of a string that 
consists of binomial coefficients: ![c_n_k](misc/images/eng/c_n_k.png) for `k=0..n` separated
by spaces ![from_1_to_n](misc/images/eng/from_1_to_n.png). `!` – the operation of calculating a factorial; 
the factorial of a number n is calculated as `n! = 1*2*3*...*n`; n is specified as a 
non-negative integer via the standard input stream–stdin. There should be no newline break
at the end of the response.

> **Note:** There must not be a space after the last displayed coefficient!

## Examples

| Input | Output |
| ------ | ------ |
| 0 | 1 |
| 1 | 1 1 |
| 2 | 1 2 1 |
| 3 | 1 3 3 1 |

> **Attention:** We kindly remind you that the procedure for testing your program includes an analysis of the code style. Please look in the "materials /" folder. Also, be sure to check your program for memory leaks!
