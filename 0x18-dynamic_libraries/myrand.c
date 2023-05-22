#include <stdio.h>

int rand(void)
{
	static int i = 0;

	i++;
	if (i == 1)
		return 8;
	if (i == 2)
		return 8;
	if (i == 3)
		return 7;
	if (i == 4)
		return 9;
	if (i == 5)
		return 23;
	if (i == 6)
		return 74;
	return (i << 2) % 75;
}
