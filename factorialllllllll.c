#include<stdio.h>

factorial(int n)
{
if(n==0 || n==1)
{
	return 1;
}
else
{
		return n*factorial(n-1);
}

}

int main()

{
	int number;
	printf("please enter a number: ");
	scanf("%d",&number);
	
	printf("the factorial of %d is: %d",number,factorial(number));
	
	return 0;
}