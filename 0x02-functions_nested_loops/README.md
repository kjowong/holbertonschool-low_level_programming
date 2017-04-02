# Variables, if, else, and While in the C Language

This project is about creating functions, using function prototypes as well as implementing nested loops in C.
## Environment
All the functions written has been tested on Ubuntu 14.05.5 LTS and compiled on gcc 4.8.4 (C90)

Tests done in VirtualBox on [Ubuntu](https://atlas.hashicorp.com/ubuntu/boxes/trusty64) via [Vagrant](https://www.vagrantup.com/)(1.9.1)

## Repository Breakdown
Once cloned over, the repository will contain the following files:

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
| 0-holberton.c | Prints `Holberton`, followed by a newline |
| 1-alphabet.c  |  Function that prints the alphabet, in lowercase, followed by a newline, using _putchar |
| 2-print_alphabet_x10.c | Function that prints 10 times the alphabet, in lowercase, followed by a newline, using _putchar |
| 3-islower.c | Function that checks for lowercase characters, returns 1 if lowercase, 0 otherwise |
| 4-print_alphabt.c | Function that checks for lowercase or uppercase characters, returns 1 if lowercase, 0 otherwise |
| 5-sign.c | Function that prints the sign of a number |
| 6-abs.c | Function that computes the absolute value of an integer |
| 7-print_last_digit.c | Function that prints the last digit of a number |
| 8-24_hours.c | Function that prints every minute of the day, starting from `00:00` to `23:59`|
| 9-times_table.c | Function that prints the 9 times table, starting from `0`|
| 10-add.c | Function that adds two integers and returns the result |
| 11-print_to_98.c | Function that prints all natural numbers from `n` to `98`, followed by a newline |
| 100-times_table.c | Function that prints the `n` times table, starting from `0`|
| 101-natural.c | Program that computes and prints the sum of all multiples of `3` or `5` below `1024` (exclued), followed by a newline |
| 102-fibonacci.c | Program that prints the first 50 Fibonacci numbers starting with `1` and `2`, followed by a newline |
| 103-fibonacci.c | Program that finds and prints the sum of the even-valued terms, followed by a newline |
| 104-fibonacci.c (TO-BE-ADDED) | Program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`, followed by a newline|

## How to Use
There are two ways to use the C functions in your code.
First step is to clone the repository into your directory
```
$ https://github.com/kjowong/holbertonschool-low_level_programming.git
```
Once that is done, you can create a static library or use the -I in gcc

### Compile with a static library for 0x02-functions_nested_loops
Change your directory into the 0x02-functions_nested_loops directory in order to create your static library
```
$ cd holbertonschool-low_level_programming
$ cd 0x02-functions_nested_loops
```
Compile all the `.c` files in 0x02-functions_nested_loops
```
gcc -Wall -Werror -Wextra -pedantic -c *.c
```
All your `.c` files should also have a corresponding `.o` file. Run the following to create your static library:
```
ar -rc lib<LIBRARY-NAME>.a *.o
```
To run your static library with your own `YOUR-FILE.c` file, use the following command:
```
gcc <YOUR-FILE>.c -L. -lib<LIBRARY-NAME> -o <OUT-NAME>
```
### Compile without a static library for 0x02-functions_nested_loops
Make sure the 0x02-functions_nested_loops directory is in the same directory as your `YOUR-FILE.c` file and then run the following command:
```
Details To be added
```
## Use in code 
### How to use a functon in your code
Please see the following example when print_alphabet is implemented in your code:

```
#include <holberton.h>

int main(void)
{
  print_alphabet();
  return (0):
 }
```
This is an an example output:
```
$ abcdefghijklmnopqrstuvwxyz
```
## Notes
Acknowledgement to Holberton School for providing the test files

## Known Bugs
There are no known bugs at the time

### Author
*Kimberly Wong* - [Github](https://github.com/kjowong) || [Twitter](https://twitter.com/kjowong) || [Email](kimberly.wong@holbertonschool.com)

#### Feedback and contributors welcomed.

