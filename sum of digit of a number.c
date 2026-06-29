#include<stdio.h>

int sod(int n)
{
if(n==0)
{
	return 0;
}
else
{
	return n%10+sod(n/10);
}
}

int main()
{
	int number;
	printf("please enter a number: ");
	scanf("%d",&number);
	
	printf("the sum of all digit of %d is: %d",number,sod(number));
	
	return 0;
}