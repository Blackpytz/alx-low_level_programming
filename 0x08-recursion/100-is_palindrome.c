#include "main.h"
#include <string.h>

/**
*is_palindrome_helper - function that returns 1 if a string is a
*palindrome and 0 if not
*@s: string to check if it's palindrome
*@start: start of string
*@end: end of string
*Return: 1 if string is a palindrome OR 0 if not.
*/
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
*is_palindrome - function that returns 1 if string is a palindrome and 0 if not
*@s: string to be checked if it is palindrome
*Return: 1 if string is a palindrome OR 0 if not.
*/
int is_palindrome(char *s)
{
	int length;

	length = strlen(s);
	if (length <= 1)
		return (1);
	return (is_palindrome_helper(s, 0, length - 1));
}
