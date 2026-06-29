#include<stdio.h>
int main()

{
	int number;
	printf("please enter a number: ");
	scanf("%d",&number);
	
	if(number%10==0)
	{
		printf("the number is multiple of 10");
		
	}
	else
	{
		printf("the number is not a multiple of 10");
		
	}
	return 0;
}