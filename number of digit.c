#include<stdio.h>
int main()

{
	int number;
	printf("please enter a number: ");
	scanf("%d",&number);

	int digit=0;
	int number1=number;
	
	while(number>0)
	
	{
		
		number=number/10;
		digit++;
	}

printf("the number of digit in the number %d is %d",number1,digit);
return 0;
}
