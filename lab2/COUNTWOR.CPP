#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  char a[100];
  int i,j=0;
  printf("Enter a string ");
  gets(a);
  for (i=0;a[i]!='\0';i++)
  {
    if(a[i]==' ')
      j++;
  }
  printf("Total number of words are %d",j+1);
getch();
}