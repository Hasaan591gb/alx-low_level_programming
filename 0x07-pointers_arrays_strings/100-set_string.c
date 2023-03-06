#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: address parameter
 * @to: value parameter
 */
void set_string(char **s, char *to)
{
	*s = to;
}
