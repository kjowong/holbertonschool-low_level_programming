#include <stdio.h>
/**
  * main -
  *
  * Return 0 (Success)
**/
int main(void)
{
	int integerType;
	float floatType;
	char charType;
	long longType;
	long long longlongType;

	printf("Size of a char: %ld bytes\n",sizeof(charType));
	printf("Size of an int: %ld bytes\n",sizeof(intType));
	printf("Size of a long int: %ld bytes\n",sizeof(longType));
	printf("Size of a long long int: %ld bytes\n ",sizeof(longlongType));
	printf("Size of a float: %ld bytes\n",sizeof(floatType));
	return (0);
}
