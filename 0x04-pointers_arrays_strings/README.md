# Pointers, Arrays, and Strings in the C Language
This project is about pointers, arrays, and strings
## Environment
All the functions written has been tested on Ubuntu 14.05.5 LTS and compiled on gcc 4.8.4 (C90)

Tests done in VirtualBox on [Ubuntu](https://atlas.hashicorp.com/ubuntu/boxes/trusty64) via [Vagrant](https://www.vagrantup.com/)(1.9.1)

## Repository Breakdown
Once cloned over, the repository will contain the following files:

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
| 0-reset_to_98.c | Function that takes a pointer to an `int` as a parameter and updates value to `98` |
| 1-swap.c  |  Function that swaps the values of two integers |
| 2-strlen.c | Function that returns the length of string |
| 3-puts.c | Function that prints a string, followed by a new line to `stdout` |
| 4-print_rev.c | Function that prints a string, in reverse, followed by a new line |
| 5-rev_string.c | Function that reverses a string |
| 6-puts2.c | Function that prints 1 char out of 2 of a string, followed by a new line |
| 7-puts_half.c | Function that prints half of a string, followed by a new line |
| 8-print_array.c | Function that prints `n` elements of an array of integers, followed by a new line |
| 9-strcpy.c | Function that copies the string pointed to by `src`, including the null byte, to the buffer pointed to by `dest`. |
| **100-atoi.c (TO-BE-ADDED) | Function that converts a string an integer** |
| **101-keygen.c (TO-BE-ADDED) | Program that generates random valid passwords for the program 101-crackme** |

## How to Use
There are two ways to use the C functions in your code.
First step is to clone the repository into your directory
```bash 
$ https://github.com/kjowong/holbertonschool-low_level_programming.git
```
Once that is done, you can create a static library or use the -I in gcc

### Compile with a static library for 0x04-pointers_arrays_strings
Change your directory into the 0x04-pointers_arrays_strings directory in order to create your static library
```bash
$ cd holbertonschool-low_level_programming
$ cd 0x04-pointers_arrays_strings
```
Compile all the `.c` files in 0x04-pointers_arrays_strings
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
### Compile without a static library for 0x04-pointers_arrays_strings
Make sure the 0x04-pointers_arrays_strings directory is in the same directory as your `YOUR-FILE.c` file and then run the following command:
```
Details To be added
```
## Use in code 
### How to use a functon in your code
Please see the following example when `void reset_to_98(int *n)` is implemented in your code:

```C
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
```
This is an an example output:
```bash
$ n=402
  n=98
```
## Notes
Acknowledgement to Holberton School for providing the test files.

## How to Use

## Known Bugs
There are no known bugs at the time

### Author
*Kimberly Wong* - [Github](https://github.com/kjowong) || [Twitter](https://twitter.com/kjowong) || [Email](kimberly.wong@holbertonschool.com)

#### Feedback and contributors welcomed.

