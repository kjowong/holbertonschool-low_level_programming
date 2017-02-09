#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
* main - print string
*
* Return: Always 1 (Success)
**/
int main(void)
{
	int st = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"); 
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", size);
	return (1);
}
