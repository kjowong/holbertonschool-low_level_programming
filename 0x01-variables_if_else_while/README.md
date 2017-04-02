# Variables, if, else, and While in the C Language

This project is about nagivating and declaring variables, conditional statements, and using while loops in C.
## Environment
All the functions written has been tested on Ubuntu 14.05.5 LTS

Tests done in VirtualBox on [Ubuntu](https://atlas.hashicorp.com/ubuntu/boxes/trusty64) via [Vagrant](https://www.vagrantup.com/)(1.9.1)

## Repository Breakdown
Once cloned over, the repository will contain the following files:

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
| 0-positive_or_negative.c | Will assign a random number to var `n` each time it's executed and will print whether `+` or `-` |
| 1-last_digit.c      | Will assign a random number to var `n` each time it's executed and will print last digit stored in `n` |
| 2-print_alphabet.c     | Prints the alphabet in lowercase, followed by newline using _putchar |
| 3-print_alphabets.c | Prints the alphabet in lowercase except for `q` and `e`, followed by newline using _putchar |
| 4-print_alphabt.c | Prints the alphabet in lowercase then uppercase, followed by newline using _putchar |
| 5-print_numbers.c | Prints all single digit numbers of base 10, followed by newline |
| 6-print_numberz.c | Prints all single digit numbers of base 10, followed by newline, using _putchar |
| 7-print_tebahpla.c     | Prints alphabet in lowercase in reverse, followed by newline, using _putchar |
| 8-print_base16.c | Prints all numbers of base 16 in lowercase, followed by newline, using _putchar |
| 9-print_comb.c | Prints all possible combos of single-digit numbers, using _putchar|
| 10-print_comb2.c | Prints the numbers from `00` to `99`, using _putchar |
| 100-print_comb3.c | Prints all possible combos of two digits, using _putchar |
| 101-print_comb4.c | Prints all possible combos of three digits, using _putchar |
| 102-print_comb5.c | Prints all possible combos of two two-digit numbers, using _putchar |

## How to Use
### For script files
The first step is to change the access permission, done so with the following example:
```
$ chmod a+x <FILE-NAME>
```
The script command above gives all users executable permissions for the script file. Once that is done, you can run the script command like so:
```
$ ./0-preprocessor
```

### For C files
To run the C files, you need to use the gcc command to compile, like so:
```
$ gcc -Wall <FILE-NAME>
```
Example output for **5-printf.c**. Note that `a.out` is the default output file when C programs are compiled.
```
$ gcc -Wall 5-printf.c
$ ./a.out
$ with proper grammar, but the outcome is a piece of art,
```
## Notes
Acknowledgement to Holberton School for providing a test file

## Known Bugs
There are no known bugs at the time

### Author
*Kimberly Wong* - [Github](https://github.com/kjowong) || [Twitter](https://twitter.com/kjowong) || [Email](kimberly.wong@holbertonschool.com)

#### Feedback and contributors welcomed.
