# Pointers, Arrays, and Strings in the C Language
This project is about even more pointers, arrays, and strings
## Environment
All the functions written has been tested on Ubuntu 14.05.5 LTS and compiled on gcc 4.8.4 (C90)

Tests done in VirtualBox on [Ubuntu](https://atlas.hashicorp.com/ubuntu/boxes/trusty64) via [Vagrant](https://www.vagrantup.com/)(1.9.1)

## Repository Breakdown
Once cloned over, the repository will contain the following files:

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
| 0-memset.c | Function that fills memory with a constant byte |
| 1-memcpy.c  |  Function that copies memory area |
| 2-strchr.c | Function that locates a character in a string |
| 3-strspn.c | Function that gets the length of a prefix substring |
| 4-strpbrk.c | Function that searches a string for any of a set of bytes |
| 5-strstr.c | Function that locates a string |
| 7-print_chessboard.c | Function that prints the chessboard |
| 7-puts_half.c | Function that prints half of a string, followed by a new line |
| 8-print_diagsums.c | Function that prints the sum of the two diagonals of a square matrix of integers |
| 9-set_string.c | Function that sets the value of a pointer to a char. |
| **101-crackme_password (TO-BE-ADDED)** | **File that contains the password for [crackme2](https://github.com/holbertonschool/0x06.c)** |

## How to Use
There are two ways to use the C functions in your code.
First step is to clone the repository into your directory
```bash 
$ https://github.com/kjowong/holbertonschool-low_level_programming.git
```
Once that is done, you can create a static library or use the -I in gcc

### Compile with a static library for 0x06-pointers_arrays_strings
Change your directory into the 0x06-pointers_arrays_strings directory in order to create your static library
```bash
$ cd holbertonschool-low_level_programming
$ cd 0x06-pointers_arrays_strings
```
Compile all the `.c` files in 0x06-pointers_arrays_strings
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
### Compile without a static library for 0x06-pointers_arrays_strings
Make sure the 0x06-pointers_arrays_strings directory is in the same directory as your `YOUR-FILE.c` file and then run the following command:
```
Details To be added
```
## Use in code 
### How to use a functon in your code
Please see the following example when `*_strchr` is implemented in your code:

```C
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');
    printf("%s\n", f);
    return (0);
}
```
This is an an example output:
```bash
$ llo
```
## Notes
Acknowledgement to Holberton School for providing the test files.

## How to Use

## Known Bugs
There are no known bugs at the time

### Author
*Kimberly Wong* - [Github](https://github.com/kjowong) || [Twitter](https://twitter.com/kjowong) || [Email](kimberly.wong@holbertonschool.com)

#### Feedback and contributors welcomed.

