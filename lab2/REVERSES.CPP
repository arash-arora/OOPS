#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  char a[100]="",b[100]="";
  int i,j,k,p=0;
  printf("Enter a string ");
  scanf("%s",&a);
  for (i=0;a[i]!='\0';i++)
  {
    p++;
  }
//  printf("%d",i);
  k=0;
  for(j=p-1;j>=0;j--)
  {
      b[k]=a[j];
      k++;
  }
  printf("Reversed String is %s",b);
  getch();
}