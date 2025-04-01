#include <stdio.h>
/**
 * attribute - Function executed before main
 *
 * This function is executed automatically before the main function
 * due to the constructor attribute. It prints a message to the standard
 * output.
 */
void attribute(void) __attribute__((constructor));
void attribute(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
