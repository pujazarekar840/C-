#include<stdio.h>
#include<conio.h>
void main()
{ char str[15]="seed infotech";
  int i,cnt=0;
   puts(str);
 for(i=0;i<=15;i++)
 {
   if((str[i]=='A')||(str[i]=='E')||(str[i]=='O')||(str[i]=='U')||(str[i]=='I')||(str[i]=='a')||(str[i]=='e')||(str[i]=='o')||(str[i]=='u')||(str[i]=='i'))
	   cnt++;
 }
 printf("\n %d vowel in this string",cnt);
	
	getch();
}
