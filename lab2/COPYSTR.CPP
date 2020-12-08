#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  char a[20],b[20]="",i,j;
  printf("Enter a string ");
  scanf("%s",&a);
  for (i=0;a[i]!='\0';i++)
  {
    b[i]=a[i];
  }
  printf("Copied String : %s",b);
getch();
}