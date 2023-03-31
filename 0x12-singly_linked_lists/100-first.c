#include "lists.h"

/**
 * pre_main - function with constructor attribute
 * Description: this function will be called automatically
 *		before main() is executed
 */
void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
