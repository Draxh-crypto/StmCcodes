/*
 * main.c
 *
 *  Created on: Feb 23, 2026
 *      Author: omeru
 */


#include<stdio.h>

int main(void)
{
	unsigned char distanceA2B = 160;
	unsigned char distanceB2C = 40;
	unsigned char distanceA2C;
	distanceA2C = distanceA2B+distanceB2C;
	printf("distance = %d",distanceA2C);

	return 0;

}

