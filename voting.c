#include<stdio.h>
int main()

{
	int age;
	printf("please enter your age: ");
	scanf("%d",&age);
	
	if(age>=18)
{
		printf("you are eligible for voting");
}

	else
	{
		printf("you are underage");
	}

return 0;
}