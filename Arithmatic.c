#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add,sub,mult;
	float div;
	printf("\n Enter 1st number:");
	scanf("%d",&a);
	printf("\n Enter 2nd number:");
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	mult=a*b;
	div=a/b;
	printf("\n Addition of two numbers is:%d",add);
	printf("\n Subtraction of two numbers is:%d",sub);
	printf("\n Multiplication of two numbers is:%d",mult);
	printf("\n Division of two numbers is:%.2f",div);
	getch();
}