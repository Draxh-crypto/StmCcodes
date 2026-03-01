/*
 * main.c
 *
 *  Created on: Mar 1, 2026
 *      Author: omeru
 */


//to sett bits

#include<stdio.h>

int main(int argc, char **argv) {

int a;
printf("Enter a number: \n");
scanf(" %d",&a);

a = a | (1u << 4)|(1u << 7);

printf("result %d\n",a);





}

