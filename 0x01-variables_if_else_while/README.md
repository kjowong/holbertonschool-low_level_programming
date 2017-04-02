# Variables, if, else, and While in the C Language

This project is about nagivating and declaring variables, conditional statements, and using while loops in C.
## Environment
All the functions written has been tested on Ubuntu 14.05.5 LTS and compiled on gcc 4.8.4 (C90)

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
To run the C files, you need to use the gcc command to compile, like so:
```
$ gcc -Wall -pedantic -Werror -Wextra <FILE-NAME> -o <FILE-OUTPUT>
```
Example output for **0-positive_or_negative.c**.
```
$ gcc -Wall -pedantic -Werror -Wextra 0-positive_or_negative.c -o 0-positive_or_negative
$ ./0-positive_or_negative 
$ -520693284 is negative
```
## Notes
Acknowledgement to Holberton School for providing srand source code for 0 and 1

## Known Bugs
There are no known bugs at the time

### Author
*Kimberly Wong* - [Github](https://github.com/kjowong) || [Twitter](https://twitter.com/kjowong) || [Email](kimberly.wong@holbertonschool.com)

#### Feedback and contributors welcomed.
