// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <stdlib.h>

#include "odd_even.h"

void print_binary(int number, int nr_bits)
{
	int *bit = malloc( sizeof(int) * nr_bits );
	for ( int i = 0 ; i < nr_bits ; i ++ ) {
		*(bit + i) = number & 1;
		number = number >> 1 ;
	}
	printf( "0b" );
	for ( int i = nr_bits - 1; i >= 0 ; i-- ){
		printf( "%d" , *(bit + i) );
	}
	printf( "\n" );
	free( bit );
}

void check_parity(int *numbers, int n)
{
	for( int i = 0 ; i < n ; i ++ ) {
		if ( (*(numbers + i) & 1) == 1 )
			printf("0x%08X\n" , *(numbers + i));
		else 
			print_binary(*(numbers + i) , 8);
	}
}
