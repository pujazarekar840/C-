#include<stdio.h>
#include<conio.h>
  
 void main()
 {   
    int a,b,count=0;
	printf("\n Enter number: ");
	scanf("%d",&a);
	while(a>0)
	{  
      b=a%10;
	  count++;
	  a=a/10;
	  
	}
	printf("Number is %d digit",count);
	getch();
 }