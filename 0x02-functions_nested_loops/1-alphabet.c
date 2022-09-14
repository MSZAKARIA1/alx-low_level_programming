#include 'main.h'
/**
 * print_alphabets - Entry point
 * Description: a funtion that print alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet < 'z')
	{
		_putchar(alphabet);
		alphabet++
	}
	_putchar('\n);
}
