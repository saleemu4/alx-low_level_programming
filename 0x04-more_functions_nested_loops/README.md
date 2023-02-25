_TASKS DESCRIPTIONS_
\n
0. Write a function that checks for uppercase character.\n
Prototype: int \_isupper(int c);
Returns 1 if c is uppercase
Returns 0 otherwise
FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.\n
1. Write a function that checks for a digit (0 through 9).\n
Prototype: int \_isdigit(int c);
Returns 1 if c is a digit
Returns 0 otherwise
FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.\n
2. Write a function that multiplies two integers.\n
Prototype: int mul(int a, int b);\n
3. Write a function that prints the numbers, from 0 to 9, followed by a new line.\n
Prototype: void print\_numbers(void);
You can only use \_putchar twice in your code\n
4. Write a function that prints the numbers, from 0 to 9, followed by a new line.\n
Prototype: void print\_most\_numbers(void);
Do not print 2 and 4
You can only use \_putchar twice in your code\n
5. Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.\n
Prototype: void more\_numbers(void);
You can only use \_putchar three times in your code\n
6. Write a function that draws a straight line in the terminal.\n
Prototype: void print\_line(int n);
You can only use \_putchar function to print
Where n is the number of times the character \_ should be printed
The line should end with a \\n
If n is 0 or less, the function should only print \\n \n
7. Write a function that draws a diagonal line on the terminal.\n
Prototype: void print\_diagonal(int n);
You can only use \_putchar function to print
Where n is the number of times the character \\ should be printed
The diagonal should end with a \n
If n is 0 or less, the function should only print a \n
8. Write a function that prints a square, followed by a new line.\n
Prototype: void print\_square(int size);
You can only use \_putchar function to print
Where size is the size of the square
If size is 0 or less, the function should print only a new line
Use the character # to print the square\n
9. The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.\n
Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.
Each number or word should be separated by a space
You are allowed to use the standard library\n
10. Write a function that prints a triangle, followed by a new line.\n
Prototype: void print\_triangle(int size);
You can only use \_putchar function to print
Where size is the size of the triangle
If size is 0 or less, the function should print only a new line
Use the character # to print the triangle\n
11. The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.\n
Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
You are allowed to use the standard library
Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime\_factor.c -o 100-prime\_factor -lm \n
12. Write a function that prints an integer.\n
Prototype: void print\_number(int n);
You can only use \_putchar function to print
You are not allowed to use long
You are not allowed to use arrays or pointers
You are not allowed to hard-code special values
