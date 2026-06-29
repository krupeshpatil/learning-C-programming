#include<stdio.h>

int main()

{
	int num1;
	printf("please enter value of number 1:");
	scanf("%d",&num1);
	
	int num2;
	printf("please enter a value of number2: ");
	scanf("%d",&num2);
	
	if(num1>num2)
	{
		printf("the number1 is greater than number2");
	
	}
	
	else if(num1=num2)
	{
		printf("the number1 is equal to number 2");
		
	}
	
	else
	{
		printf("the number2 is greater than number1");
		
	}
	return 0;

}