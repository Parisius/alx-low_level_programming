#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for uppercase character
* @c: Variable text
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

int _isalpha(int c){}
int _atoi(char *s){}
int _abs(int n){}
char *_strcpy(char *dest, char *src){}
char *_strpbrk(char *s, char *accept){}
char *_strstr(char *haystack, char *needle){}