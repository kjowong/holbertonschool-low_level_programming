# Recursion in the C Language
This project is about creating recursive functions
## Environment
All the functions written has been tested on Ubuntu 14.05.5 LTS and compiled on gcc 4.8.4 (C90)

Tests done in VirtualBox on [Ubuntu](https://atlas.hashicorp.com/ubuntu/boxes/trusty64) via [Vagrant](https://www.vagrantup.com/)(1.9.1)

## Repository Breakdown
Once cloned over, the repository will contain the following files:

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
| 0-puts_recursion.c | Function that prints a string, followed by a newline |
| 1-print_rev_recursion.c  |  Function that prints a string in reverse |
| 2-strlen_recursion.c | Function that returns a length of a string |
| 3-factorial.c | Function that returns the factorial of a given number |
| 4-pow_recursion.c | Function that returns the value of `x` raised by the power of `y` |
| 5-sqrt_recursion.c | Function that returns the natural square root of a number |
| 6-is_prime_number.c | Function that returns `1` if the input integer is a prime number |
| 7-is_palindrome.c | Function that returns `1` if a string is a palindrome and `0` if not |
| 100-wildcmp.c | Function that compares two strings and returns `1` if the strings can be considered identical, otherwise return `0` |

## How to Use
There are two ways to use the C functions in your code.
First step is to clone the repository into your directory
```bash 
$ https://github.com/kjowong/holbertonschool-low_level_programming.git
```
Once that is done, you can create a static library or use the -I in gcc

### Compile with a static library for 0x07-recursion
Change your directory into the 0x07-recursion directory in order to create your static library
```bash
$ cd holbertonschool-low_level_programming
$ cd 0x07-recursion
```
Compile all the `.c` files in 0x07-recursion
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
### Compile without a static library for 0x07-recursion
Make sure the 0x07-recursion directory is in the same directory as your `YOUR-FILE.c` file and then run the following command:
```
Details To be added
```
## Use in code 
### How to use a functon in your code
Please see the following example when `is_palindrome` is implemented in your code:

```C
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("holberton");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
```
This is an an example output:
```bash
$ 1
  1
  0
  1
```
## Notes
Acknowledgement to Holberton School for providing the test files.

## How to Use

## Known Bugs
There are no known bugs at the time

### Author
*Kimberly Wong* - [Github](https://github.com/kjowong) || [Twitter](https://twitter.com/kjowong) || [Email](kimberly.wong@holbertonschool.com)

#### Feedback and contributors welcomed.

