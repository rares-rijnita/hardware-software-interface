// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "rotate.h"

int main(void)
{
	unsigned int n = 0x00000001; 
	rotate_right( &n , 16) ;
	printf( "%d " , n );
	
	return 0;
}
