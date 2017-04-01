# Hello, World in the C Programming Language

This project is about starting with the C Programming Language and learning about the basics of the compiler, assembler, and as well as the most used built-in functions such as printf.
## Environment
All the functions written has been tested on Ubuntu 14.05.5 LTS

Tests done in VirtualBox on [Ubuntu](https://atlas.hashicorp.com/ubuntu/boxes/trusty64) via [Vagrant](https://www.vagrantup.com/)(1.9.1)

## Repository Breakdown
Once cloned over, the repository will contain the following files:

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
| 0-preprocessor | script that runs a C file through the preprocessor and saves result into another file |
| 1-compiler      | script that generates the assembly code of a C code and saves to output file |
| 2-assembler     | script that compiles a C file but does not link             |
| 3-name | script that compiles a C file and creates an executable |
| 4-puts | C program that prints a string followed by a newline, uses function **puts** |
| 5-printf.c | C program that prints a string followed by newline, uses function **printf** |
| 6-size.c | C program that prints the size of various types in the computer it is compiled to run on |
| 100-intel     | script that generates assembly code of a C code and saves to an output file |
| 101-quote.c | C program that prints a string followed by a newline in standard error|

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
