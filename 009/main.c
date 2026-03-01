/*
 * main.c
 *
 *  Created on: Feb 28, 2026
 *      Author: omeru
 */
#include <stdio.h>


int main(int argc, char **argv) {
float a,b,c;
float average;
printf("enter a num1: \n");
fflush(stdout);
scanf("%f",&a);
printf("enter a num2: \n");
fflush(stdout);
scanf("%f",&b);
printf("enter a num3: \n");
fflush(stdout);
scanf("%f",&c);

average =(a+b+c)/3;
printf("average is = %f \n",average);

while(getchar() !='\n'){

}

getchar();

	return 0;
}
