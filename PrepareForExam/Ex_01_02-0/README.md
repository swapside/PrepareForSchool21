# Exam_01_02. Fixing errors №2
The russian version of the task can be found in the repository.

## Task

| Exam_01_02 | |
| ------ | ------ |
| Level: | 1 |
| Topics: | Basic data types, declaring variables, assignment operator. |
| Directory for the solution: | src/ |
| Solution files: | main.c |
| Input data: | Standard input stream (stdin) |
| Output data: | Standard output stream (stdout) |

An error occurred when writing the program. It is necessary to correct syntactic, stylistic and logical errors without changing the operation of the program. There should be no newline break at the end of the response.

```c
#include <stdio.h>

int main(void)
{
	int x1 = 1 x2 = 2;

	scanf("%d %d", &x1, &x2);
	printf("%d", x1 * x2);

	return 0;
}
```

## Examples

| Input | Output |
| ------ | ------ |
| 2 2 | 4 |
| -4 4 | -16 |

> **Attention:** We kindly remind you that the procedure for testing your program includes an analysis of the code style. Please look in the "materials /" folder. Also, be sure to check your program for memory leaks!
