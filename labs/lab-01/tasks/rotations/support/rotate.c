// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "rotate.h"

unsigned int one_left( unsigned int n ){
	unsigned int result = n ; 
	unsigned int MSB = 0b10000000000000000000000000000000 ;
	if ( ( n & MSB ) == 0 ) 
		{
			result = n << 1 ;
		}
	else
		{
			result = n << 1 ;
			result += 1 ;
		}
	return result ;
}

unsigned int one_right( unsigned int n ){
	unsigned int result = n ;
	unsigned int MSB = 0b10000000000000000000000000000000 ;
	if ( ( n & 1 ) == 1 ){
		result = n >> 1 ;
		result += MSB ;
	}
	else 
	{
		result = n >> 1 ;
	}
	return result ;
}

void rotate_left(unsigned int *number, int bits)
{
	unsigned int temp = *number ; 
	for( int i = 0 ; i < bits ; i ++ ){
		temp = one_left( temp );
	}
	*number = temp ; 
}

void rotate_right(unsigned int *number, int bits)
{
	unsigned int temp = *number ;
	for ( int i = 0 ; i < bits ; i ++ ) {
		temp = one_right( temp );
	}
	*number = temp ; 
}
