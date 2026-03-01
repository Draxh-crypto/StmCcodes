/*
 * main.c
 *
 *  Created on: Mar 1, 2026
 *      Author: omeru
 */

// to reset bits

#include <stdio.h>

int main(int argc, char **argv) {

int a;
printf("Enter a number : \n");
scanf(" %d",&a);

a &= ~((1u<<3)|(1u));

printf("%d",a);


}

