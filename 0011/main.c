/*
 * main.c
 *
 *  Created on: Feb 28, 2026
 *      Author: omeru
 */

#include<stdio.h>



int main(int argc, char **argv) {

int data = 100;
int* data_p = &data;
int value = *data_p;
printf("data is : %d\n",data);
printf("The address of data is : %p\n",&data);
printf("The data_p is: %p \n",data_p);
printf("Value is : %d\n",value);
printf("after changes\n");

*data_p = 65;

printf("data is : %d\n",data);
printf("Value is : %d\n",value);





}








