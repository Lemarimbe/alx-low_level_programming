#include <stdio.h>

void first_thing(void) __attribute__ ((constructor));

/**
 * first_thing - prints a sentence before the main
 * function is executed
 */
void first_thing(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
