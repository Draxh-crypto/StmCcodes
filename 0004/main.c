#include<stdio.h>

void Foo(void);
5ş
int main(int argc, char **argv) {
Foo();
Foo();
Foo();
Foo();


}



void Foo(void){

	static int counter = 0;
	if(counter == 0)
		printf("wow it has started\n");
	counter++;
	printf("%d\n",counter);


}

