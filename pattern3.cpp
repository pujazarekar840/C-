#include<stdio.h>
#include<conio.h>
   
  void main()
  {   
    int i,j;
	char a='A';
	for(i=1;i<=5;i++)
	{ 
		//char a='A';
		for(j=1;j<=i;j++)
		{
			printf("%c",a);
			 //a++;
		}
		a++;
		printf("\n");

	}
	getch();
  }