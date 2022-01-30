#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3,m4,m5,tot;
	float avr;
	printf("\n Enter m1 marks:");
	scanf("%d",&m1);
	printf("\n Enter m2 marks:");
	scanf("%d",&m2);
	printf("\n Enter m3 marks:");
	scanf("%d",&m3);
	printf("\n Enter m4 marks:");
	scanf("%d",&m4);
	printf("\n Enter m5 marks:");
	scanf("%d",&m5);
	tot=m1+m2+m3+m4+m5;
	printf("\n total of 5 subjects is:%d",tot);
	avr=(float)tot/5;
	printf("\n average of 5 subjects is:%.2f",avr);
	getch();
}