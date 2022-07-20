# Exam_03_01. Platinum ball 
The russian version of the task can be found in the repository.

## Task

| Exam_03_01 | |
| ------ | ------ |
| Level: | 2 |
| Topics: | Data types, variables, expressions, logical actions, and math functions. |
| Directory for the solution: | src/ |
| Solution files: | main.c |
| Input data: | Standard input stream (stdin) |
| Output data: | Standard output stream (stdout) |

Create a program that calculates the mass of a platinum ball in kilograms. The radius of the ball (in meters, real number) is specified in the standard input stream–stdin, and the density of platinum is 21,500 $`kg/m^3`$. Round up the result of the calculation to an integer and output it to the standard output stream (stdout). Check the validity of the entered data. In case of any error, output "n/a"

> **Note:** Ball volume formula: `V = (4 / 3) * pi * R^3` \
> **Note:** Density formula: `P = m / V` \
> **Note:** Accuracy is important in this task, so we recommend using the constant `M_PI` (containing the number pi) and the function `double round (double x);` from the library `<math.h>`, as well as `double` instead of `float`

> The output should look like this - `printf("%.0lf", result);`

## Examples

| Input | Output |
| ------ | ------ |
| 1 | 90059 |
| 10 | 90058989 |

> **Attention:** We kindly remind you that the procedure for testing your program includes an analysis of the code style. Please look in the "materials /" folder. Also, be sure to check your program for memory leaks!
