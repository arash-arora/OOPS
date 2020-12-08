#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  clrscr();
  char a[100],b[100]="";
  int p=0,i,j,k;
  cout<<"Enter a word ";
  gets(a);
  p=strlen(a);

  k=0;
  for (i=0;a[i]!='\0';i++)
  {
    if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
    {

    }
    else
    {
      if (k<p)
      {
      b[k]=a[i];
      k++;
      }
    }
  }
  cout<<b;
getch();
}