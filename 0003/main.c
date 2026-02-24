#include <stdio.h>

int main(int argc, char **argv) {

	char a1 = 'A';
	char a2 = 'P';
	char a3 = 'p';
	char a4 = 'l';
	char a5 = 'e';
	char a6 = ':';
	char a7 = ')';
	unsigned long a1Clone = (unsigned long)&a1;
	printf("Address of a1 = %p\n", &a1);
	printf("Address of a2 = %p\n", &a2);
	printf("Address of a3 = %p\n", &a3);
	printf("Address of a4 = %p\n", &a4);
	printf("Address of a5 = %p\n", &a5);
	printf("Address of a6 = %p\n", &a6);
	printf("Address of a7 = %x\n", &a7);
	printf("%p", a1Clone);



}
