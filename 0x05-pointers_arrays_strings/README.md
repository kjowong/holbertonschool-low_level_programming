# Pointers, Arrays, and Strings in the C Language
This project is about more pointers, arrays, and strings.
## Environment
All the functions written has been tested on Ubuntu 14.05.5 LTS and compiled on gcc 4.8.4 (C90)

Tests done in VirtualBox on [Ubuntu](https://atlas.hashicorp.com/ubuntu/boxes/trusty64) via [Vagrant](https://www.vagrantup.com/)(1.9.1)

## Repository Breakdown
Once cloned over, the repository will contain the following files:

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
| 0-strcat.c | Function that concatenates two strings |
| 1-strncat.c  |  Function that concatenates two strings, takes n bytes from `src` |
| 2-strncpy.c | Function that copies a string |
| 3-strcmp.c | Function that compares two strings |
| 4-rev_array.c | Function that reverses the content of an array of integers |
| 5-string_toupper.c | Function that changes all lowercase letters of a string to uppercase |
| 6-cap_string.c | Function that capitalizes all words of a string |
| 7-leet.c | Function that encodes a string to [1337](https://en.wikipedia.org/wiki/Leet) |
| 8-rot13.c | Function that encodes a string to [rot13](https://en.wikipedia.org/wiki/ROT13) |
| **100-print_number.c (TO-BE-ADDED)** | **Function that prints an integer** |
| 101-magic.c | Program that prints `a[2] = 98`, followed by a new line |
| **102-infinite_add.c (TO-BE-ADDED)** | **Function that adds two numbers** |
| **103-print_buffer.c (TO-BE-ADDED)** | **Function that prints a buffer** |

## How to Use
There are two ways to use the C functions in your code.
First step is to clone the repository into your directory
```bash 
$ https://github.com/kjowong/holbertonschool-low_level_programming.git
```
Once that is done, you can create a static library or use the -I in gcc

### Compile with a static library for 0x05-pointers_arrays_strings
Change your directory into the 0x05-pointers_arrays_strings directory in order to create your static library
```bash
$ cd holbertonschool-low_level_programming
$ cd 0x05-pointers_arrays_strings
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
### Compile without a static library for 0x05-pointers_arrays_strings
Make sure the 0x05-pointers_arrays_strings directory is in the same directory as your `YOUR-FILE.c` file and then run the following command:
```
Details To be added
```
## Use in code 
### How to use a functon in your code
Please see the following example when `*_strcat()` is implemented in your code:

```C
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *p;

    printf("%s\n", s1);
    printf("%s", s2);
    p = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", p);
    return (0);
}
```
This is an an example output:
```bash
$ Hello 
  World!
  Hello World!
  World!
  Hello World!
```
## Notes
Acknowledgement to Holberton School for providing the test files.

## How to Use

## Known Bugs
There are no known bugs at the time

### Author
*Kimberly Wong* - [Github](https://github.com/kjowong) || [Twitter](https://twitter.com/kjowong) || [Email](kimberly.wong@holbertonschool.com)

#### Feedback and contributors welcomed.

