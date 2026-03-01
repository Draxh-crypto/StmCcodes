/*
 * main.c
 *
 *  Created on: Feb 28, 2026
 *      Author: omeru
 */

#include <stdio.h>

int main(int argc, char **argv) {

	char a[6];
	int i = 0;
	while (i < 6) {
		scanf(" %c", a+i);
		i++;
	}
i = 0;

	while (i < 6) {
		printf("%d ", *(a+i));
		i++;
	}


}

