#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c;
	char *start, *end, tmp;

	start = s;
	end = s;

	/* Move the end pointer to the end of the string */
	while (*(end + 1) != '\0')
	{
		end++;
	}

	/* Swap characters from start and end */
	for (i = 0; i < (end - start + 1) / 2; i++)
	{
		tmp = *(start + i);
		*(start + i) = *(end - i);
		*(end - i) = tmp;
	}
}
