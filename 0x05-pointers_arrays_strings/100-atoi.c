/**
 * _atoi - changes a string to integer
 *  @s: string parameter to be changed
 *  Return: integer value of string parameter
 */
int _atoi(char *s)
{
	int sign, result;

	sign = 1;
	if (*s == '-')
		sign *= -1;
	for (i = 0; *s >= '0' && *s <= '9'; i++)
		result = (result * 10) + (*s - '0');
	return (result * sign);
}
