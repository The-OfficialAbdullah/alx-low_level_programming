#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: the string
 *
 * Return: the resulting string
 */

char *cap_string(char *s)
{
	int i, j;
	int hasWord;
	char separators[] = ",;.!?(){}\n\t\"";

	for (i = 0; hasWord = 0; s[i] != '\0')
		i++;
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			hasWord = 1;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (separators[j] == s[i])
				hasWord = 1;
		}

		if (hasWord)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= ('a' - 'A');
				hasWord = 0;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
				hasWord = 0;
			else if (s[i] >= '0' && s[i] <= '9')
				hasWord = 0;
		}
	}
	return (s);
}
