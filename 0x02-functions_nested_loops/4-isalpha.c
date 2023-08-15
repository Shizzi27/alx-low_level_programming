#include "main.h"

/**
 * _isalpha - code should check for alphabetic character
 *@c: it should print this character
 * Return: return 1 if c is a letter, lowercase and uppercase
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
