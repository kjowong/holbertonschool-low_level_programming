# Pointers, Arrays, and Strings in the C Language

This project is about creating more functions, using function prototypes as well as implementing nested loops in C.
## Environment
All the functions written has been tested on Ubuntu 14.05.5 LTS and compiled on gcc 4.8.4 (C90)

Tests done in VirtualBox on [Ubuntu](https://atlas.hashicorp.com/ubuntu/boxes/trusty64) via [Vagrant](https://www.vagrantup.com/)(1.9.1)

## Repository Breakdown
Once cloned over, the repository will contain the following files:

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
| 0-isupper.c | Function that checks for an uppercase |
| 1-isdigit.c  |  Function that checks for a digit (`0` through `9`) |
| 2-mul.c | Function that multiples two integers|
| 3-print_numbers.c | Function that prints the numbers, from `0` to `9`, followed by a newline |
| 4-print_most_numbers.c | Function that prints the numbers, from `0` to `9` except for `2` and `4`, followed by a newline |
| 5-more_numbers.c | Function that prints 10 times the numbers, from `0` to `14`, followed by a new line |
| 6-print_line.c | Function that draws a straight line in the terminal |
| 7-print_diagonal.c | Function that draws a diagonal line on the terminal |
| 8-print_square.c | Function that prints a square, followed by a new line|
| 9-fizz_buzz.c | Program that prints the numbers from 1 to 100, followed by a new line in FizzBuzz |
| 10-print_triangle.c | Function that prints a triangle, followed by a new line |
| 100-prime_factor.c | Program that finds and prints the largest prime factor of the number 612852475143, followed by a new line. *|
| **101-print_number.c (TO-BE-ADDED)** | **Function that prints an integer** |

## How to Use
There are two ways to use the C functions in your code.
First step is to clone the repository into your directory
```bash
$ https://github.com/kjowong/holbertonschool-low_level_programming.git
```
Once that is done, you can create a static library or use the -I in gcc

### Compile with a static library for 0x03-more_functions_nested_loops
Change your directory into the 0x03-more_functions_nested_loops directory in order to create your static library
```bash
$ cd holbertonschool-low_level_programming
$ cd 0x03-more_functions_nested_loops
```
Compile all the `.c` files in 0x03-more_functions_nested_loops
```bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
```
All your `.c` files should also have a corresponding `.o` file. Run the following to create your static library:
```bash
ar -rc lib<LIBRARY-NAME>.a *.o
```
To run your static library with your own `YOUR-FILE.c` file, use the following command:
```bash
gcc <YOUR-FILE>.c -L. -lib<LIBRARY-NAME> -o <OUT-NAME>
```
### Compile without a static library for 0x03-more_functions_nested_loops
Make sure the 0x03-more_functions_nested_loops directory is in the same directory as your `YOUR-FILE.c` file and then run the following command:
```
Details To be added
```
## Use in code 
### How to use a functon in your code
Please see the following example when `_isupper()` is implemented in your code:

```C
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
```
This is an an example output:
```bash
$ A: 1
  a: 0
```
## Notes
Acknowledgement to Holberton School for providing the test files.

*Your program will be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra 100-prime_factor.c -o 100-prime_factor -lm`

## How to Use

## Known Bugs
There are no known bugs at the time

### Author
*Kimberly Wong* - [Github](https://github.com/kjowong) || [Twitter](https://twitter.com/kjowong) || [Email](kimberly.wong@holbertonschool.com)

#### Feedback and contributors welcomed.

