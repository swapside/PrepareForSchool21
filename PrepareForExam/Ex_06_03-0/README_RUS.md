# Exam_06_03. Поворот матрицы

## Задание

| Exam_06_03 | |
| ------ | ------ |
| Уровень: | 4 |
| Темы: | Матрицы. |
| Директория для решения: | src/ |
| Файлы решения: | main.c |
| Входные данные: | Стандартный поток ввода (stdin) |
| Выходные данные: | Стандартный поток вывода (stdout) |

Написать программу, осуществляющую поворот матрицы размера `M x N` на 90 градусов по часовой стрелке. Размерность матрицы задается на стандартном потоке ввода stdin в виде двух положительных чисел, после чего следует `M * N` целых чисел описывающих построчно матрицу. Результат работы вывести на стандартный поток вывода stdout в виде таблицы (после каждой выведенной строки результирующей матрицы должен быть осуществлен перенос строки), элементы должны быть разделены пробелами, а перед переносом строк не должно быть пробельных символов. В конце ответа не должно быть переноса на новую строку. Проверить на валидность введенные данные. В случае любой ошибки выводить "n/a".

## Примеры

| Входные данные | Результат работы |
| ------ | ------ |
| 2 3<br/>1 2 3<br/>4 5 6 | 4 1<br/>5 2<br/>6 3 |
| 3 3<br/>1 2 3<br/>4 5 6<br/>7 8 9 | 7 4 1<br/>8 5 2<br/>9 6 3 |

> **Внимание:** Мы любезно напоминаем вам, что процедура тестирования вашей программы включает анализ стиля кода. Пожалуйста, загляните в папку "materials/". Также обязательно проверяйте вашу программу на утечки памяти!