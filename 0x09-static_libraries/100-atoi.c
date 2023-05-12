#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string input parameter
 * Return: converted integer from string
 */

int _atoi(char *s)
{
	unsigned int digit;
	int i, sign;

	digit = 0;
	sign = 1;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * (-1);
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			digit = (digit * 10) + (s[i] - 48);
		}
		else if (digit > 0)
		{
			break;
		}
		s++;
	}

	return (digit * sign);
}
