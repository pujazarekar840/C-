#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5]={10,20,30,40,50},temp,i,j;
	printf("\n Array Element: ");
	for(i=0;i<=4;i++)
	{
	  printf("\n a[%d]=%d",i,a[i]);
	}
	for(i=0,j=4;i<2 && j>1;i++,j--)
	{
	  temp=a[i];
	  a[i]=a[4-i];
	  a[4-i]=temp;
	}
	printf("\n Reverse Array Elements: ");
	for(i=0;i<=4;i++)
	{
    printf("\n a[%d]=%d",i,a[i]);
	}
	getch();
}