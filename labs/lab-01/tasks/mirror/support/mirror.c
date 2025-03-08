// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mirror.h"

void mirror(char *s)
{
	char *m = malloc( (int)strlen(s) );
	int i = 0 ; 
	while( *(s+i) ) {
		*(m + i ) = *( s + strlen(s) - 1 - i );
		i++;
	}
	*(m+i) = '\0';
	strcpy( s , m );
}	
