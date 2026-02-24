#include<stdio.h>

void myFoo(void);
int myScore = 0;
int valueA = 4;

int main()
{
	int valueA = 67;
	printf("valueA is %d\n",valueA);
	myScore = 800;
	printf("my score is = %d\n",myScore);
	myFoo();
	printf("my NEW score is = %d",myScore);
	return 0;

}

void myFoo(void)
{

myScore = 900;

}
