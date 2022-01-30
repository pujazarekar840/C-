#include<stdio.h>
#include<conio.h>
void main()
{
  int i,search;
  int arr[5];
  printf("\n Enter your element: ");
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("\n Enter your element to search: ");
  scanf("%d",&search);
  for(i=0;i<5;i++)
  {
	  if(arr[i]==search)
	  {
	  printf("Element present in array %d",search);
	  break;
	  }
  }
	  if(i==5)
	  {
	   printf("Element not present in array %d",search);
	  }
	  getch();

}