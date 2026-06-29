#include<stdio.h>

int main ()

{
	char ch;
	printf("please enter a charecter: ");
	scanf("%d",&ch);
	
	if(ch==a || ch==e || ch==i || ch==o || ch==u || ch==A || ch==E || ch==I || ch==O|| ch==u)
	printf("the charecter is vowel");
	
	else 
	printf("the charecter is consonant");
	
	return 0;
}