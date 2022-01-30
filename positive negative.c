#include<stdio.h>
#include<conio.h>
void main()
{  
	int a;
	printf("\n Enter number");
	scanf("%d",&a);
	if (a>0)
		printf(" %d positive number",a);
	else
		if (a<0)
		printf(" %d negative number",a);
	else
		printf("zero");
		getch();




}