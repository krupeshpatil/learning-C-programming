#include<stdio.h>
int main()

{
	int year;
	printf("please enter a year: ");
	scanf("%d",&year);
	
	if(year%4==0)
	printf("the year is a leap year");
	
	else
	printf("the year is not leap year");
	
	return 0;
}