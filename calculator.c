#include<stdio.h>

int addition(int a,int b)
{
	return a+b;
}

int substraction(int a,int b)
{
	return a-b;
}

int multiplication(int a,int b)
{
	return a*b;
}

int division(int a,int b)
{
	return a/b;
}

int main ()

{
	while(1)
	{
			int num1;
	int num2;
	
	printf("please enter num1: ");
	scanf("%d",&num1);
	
	printf("please enter num2: ");
	scanf("%d",&num2);
	
		printf("1)addition\n2)substraction\n3)multiplication\n4)division\n5)exit\n");
			int choice;
			printf("please enter your choice: ");
			scanf("%d",&choice);
			
	    
		if(choice==1)
		{
			printf("the additon of %d and %d is: %d \n",num1,num2,addition(num1,num2));
		}
		
			if(choice==2)
		{
			printf("the substraction of %d and %d is: %d \n",num1,num2,substraction(num1,num2));
		}
		
			if(choice==3)
		{
			printf("the multiplication of %d and %d is: %d \n",num1,num2,multiplication(num1,num2));
		}
		
			if(choice==4)
		{
			printf("the division of %d and %d is: %d \n",num1,num2,division(num1,num2));
		}
		
			if(choice==5)
		{
			return 0;
		}
	}
	
	return 0;
}