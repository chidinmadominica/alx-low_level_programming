#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 *
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
		int i = 0, op = 0;

		while (op == 0)
		{
			if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
				break;
			op = *(s1 + i) - *(s2 + i);
			i++;
		}
		return (op);
}
