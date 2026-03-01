/*
 * main.c
 *
 *  Created on: Mar 1, 2026
 *      Author: omeru
 */

// to test bits

#include<stdio.h>

int main(int argc, char **argv) {
	int a;

	printf("Enter a number: \n");
	scanf("%d", &a);

	if (a & 1) {

		printf("it's an odd number \n");

	} else {

		printf("it's an even number \n");

	}

}

