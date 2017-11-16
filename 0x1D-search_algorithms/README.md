# 0x1D. C - Search Algorithms

## Description

This project is about implementing search algoritimsn ad Big O notations

## Environment
All the functions written has been tested on Ubuntu 14.05.5 LTS and compiled on gcc 4.8.4 (C90)

* __OS:__ Ubuntu 14.04 LTS

## Repository Breakdown
Summary of what repository contains:

|   **Item**    |  **Decription**                       |
|---------------|---------------------------------------|
| README.md   | Readme file           |
| 0-linear.c      | function that searches for a value in an array using Linear Search         |
| 1-binary.c     | function that searches for a value in a sorted array using Binary Search            |
| 2-O | Space complexity |
| 3-O     | Space complexity |
| 4-O | Space complexity |
| 5-O     | Space complexity |
| 6-O     | Space complexity |
| search_algos.h     | header file with functions prototypes |

## How to Use
### How to use a functon in your code

```C
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```
This is an an example output:
```bash
$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear
$ ./0-linear
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```

## Testing
Tests done in VirtualBox on Ubuntu via Vagrant(1.9.1)

## Notes
Acknowledgement to Holberton School for providing the test files.

## Known Bugs
There are no known bugs at the time.

## Authors

* Kimberly Wong, [kjowong](https://github.com/kjowong) | [@kjowong](https://twitter.com/kjowong) | [Email](kjowong@gmail.com)


#### Feedback and contributors welcomed.

