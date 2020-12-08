#include<stdio.h>
#include<conio.h>
void main()
{ clrscr();
  int arr[10],i,min;
  printf("Enter your array ");
  for (i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }
  min=arr[0];
  for (i=0;i<10;i++)
  {
    if (arr[i]<min)
    {
      min=arr[i];
    }
  }
  printf("Min of array : %d",min);
  getch();
}
