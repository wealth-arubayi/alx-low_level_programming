#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int mask = 0x01;

	while (mask <= xor)
	{
		if (mask & xor) /* bit is lit in xor, will need to flip */
			n_flips++;
		mask = mask << 1;
	}
	return (n_flips);
}
