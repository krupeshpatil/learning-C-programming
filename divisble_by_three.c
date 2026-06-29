#include<stdio.h>
int main()

{
	int a;
	printf("please enter a number: ");
	scanf("%d",&a);
	
	if(a%3==0)
	{
		printf("the number is divisble by 3");
		
	}
	
	else
	{
		printf("the number is not divisible by 3");
		
	}

return 0;
}