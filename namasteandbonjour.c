#include<stdio.h>
//function declaration
void namaste();
void bonjour();

int main()
{
	char n;
	printf("please enter i if indian and f if french: ");
	scanf("%c",&n);

if(n=='i')
{
	namaste();
}

else if(n=='f')
{
	bonjour();
}
	return 0;
}

void namaste()
{
	printf("namaste beta");
}

void bonjour()
{
	printf("bonjour my boy");
}
