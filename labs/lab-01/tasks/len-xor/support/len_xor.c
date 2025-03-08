// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "len_xor.h"

int my_strlen(const char *str)
{
	int n = 0;
	while (*(str + n) != '\0')
	{
		n++;
	}
	if (n > 0)
		return n;
	return -1;
}

void equality_check(const char *str)
{
	int n = my_strlen(str);
	int poz = 0;
	for ( int i = 0; i < n ; i++ )
	{
		poz = ((i + (1 <<  i)) % n);
		if ( *(str + i) == *(str + poz))
		{
			printf("Address of %c: %p\n", *(str + i), str + i);
		}

	}
}
