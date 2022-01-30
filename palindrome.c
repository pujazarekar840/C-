#include<stdio.h>
#include<conio.h>
void main()
{  int num,temp,rev=0,rem;
   printf("\n Enter the number: ");
   scanf("%d",&num);
   temp=num;
    while(temp!=0)
   {   
     rem=temp%10;
	 rev=rev*10+rem;
	 temp=temp/10;
   }
   if(rev==num)
   
   printf("\n Number is palindron %d",num);
   else
	    printf("\n Numberis not palindrom %d",num);
   
  
   getch();
}