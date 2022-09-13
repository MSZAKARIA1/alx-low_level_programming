#include 'main.h'
/**
 * print_alphabets - Entry point
 * Describe: a funtion that print alpha in lower
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet = 'a';
	while(alphabet < 'z')
	{
		_putchar(alphabet);
		alphabet++
	}
	_putchar('\n);
}
