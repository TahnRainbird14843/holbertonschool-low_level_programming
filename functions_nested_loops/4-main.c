#include "main.h"

int main(void)
{
	int r;

	r = _isalpha('d');
	_putchar(r + '0');
	r = _isalpha('F');
	_putchar(r + '0');
	r = _isalpha('_');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
