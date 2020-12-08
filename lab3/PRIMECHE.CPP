#include<stdio.h>
#include<conio.h>
int prime(int i)
{
int j,prime_check,count=0;
  for(j=2;j<i;j++)
  {
    if(i%j==0)
    {
      count++;
    }
  }
  if(count==0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void main()
{
  clrscr();
  int i,m,n,check;
  printf("Give a range ");
  scanf("%d\t%d",&m,&n);
  for(i=m;i<=n;i++)
  {
   check = prime(i);
   if(check==1)
   {
     printf("%d is prime\n",i);
   }
  }
  getch();
}
