#include<stdio.h>
 #include<conio.h>
  
 void main()
 {   
    int a,b,count=0,c,d,z;
	printf("\n Enter number: ");
	scanf("%d",&a);
	while(a>0)
	{  
      b=a%10;
	  count++;
	  a=a/10;
	  if(count==1)
	  {
		  printf("\n last digit is %d",b);
		  c=b;
	  }

	  
	}
	printf("\n first digit is %d",b);
	d=b;
	z=c+d;
	printf("\n sum of first and last digit no. is %d",z);
	 
	getch();
 }