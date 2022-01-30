#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int p;
	float r,t,a;
	printf("\n Enter principal amount:");
	scanf("%d",&p);
	printf("\n Enter rate of intrest:");
	scanf("%f",&r);
	printf("\n Enter time in years:");
	scanf("%f",&t);
	a=p*(pow((1+r/100),t));
	printf("\n compound intrest is: %f",a);
	getch();
}