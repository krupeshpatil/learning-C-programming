#include<stdio.h>
int main()

{
	int input;
	printf("please enter your password: ");
	scanf("%d",&input);
	
	int pass=4379;
	
	if(input==pass)
	{
		printf("the password is correct");
	}
	else
	{
		printf("go away stranger!!");
		
	}
	return 0;
}