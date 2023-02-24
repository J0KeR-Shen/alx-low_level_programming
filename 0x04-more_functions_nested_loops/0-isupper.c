#include "main.h"

/**
 * _isupper - function declaration
 * Description: check case of u
 * @u: character to test
 * Return: 1 for true and 0 for false
 */

int _isupper(int u);

/**
 * _isupper - function definition
 * Description: tests case of u
 * @u: character to test
 * Return: 1 if upper 0 if not upper
 */

int _isupper(int u)
{
	if (u >= 'A' && u <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
