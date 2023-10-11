#include "main.h"
/**
*print_alphabet - function that print alphabet
*it prints in lowercase
*Return: no return
*/
void print_alphabet(void)
{
int letterAlpha;
for (letterAlpha = 'a'; letterAlpha <= 'z'; letterAlpha++)
{
_putchar (letterAlpha);
}
/*_putchar (10) => _putchar('\n)'*/
_putchar (10);
}
