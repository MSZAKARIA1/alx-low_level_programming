#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 ** main - checks if positive, zero or negative
 *
 **
 *
 **Return: zero
 *
 **/
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("is positive\n", n);
} else if (n == 0)
{
	printf("is zero\n", n);
} else
{
	printf("is negative\n", n);
}
return (0);
}
