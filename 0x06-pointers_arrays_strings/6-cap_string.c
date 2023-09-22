#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @entry: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *entry)
{
	int index, count;
	char chars[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};
	int capitalize_next = 1; /* Flag to capitalize the next character */

	for (index = 0; entry[index] != '\0'; index++)
	{
		if (capitalize_next && entry[index] >= 'a' && entry[index] <= 'z')
		{
			entry[index] = entry[index] - 32; /* Convert to uppercase */
			capitalize_next = 0; /* Reset the flag */
		}

		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == entry[index])
			{
				capitalize_next = 1; /* Set flag to capitalize the next character */
				break;
			}
		}
	}
	return entry;
}
