#include<stdio.h>
#include<conio.h>
void main()
{  
	int i,sum=0;
	printf("\n odd numbers between 1 to 10 : ");
	for(i=1;i<=10;i++);
	{ if (i%2!=0)
	  { printf("\n %d",i);
	   sum=sum+i;
	  }
	}
	printf("\n sum is %d",sum);
	getch();

}