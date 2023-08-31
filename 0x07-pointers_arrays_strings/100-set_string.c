#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: input
 * @to: input
 * Returns: Always 0 (Success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
