#include<iostream.h>
#include<conio.h>
class sum
{
  public:
  int x,y,sum2;
  sum(int a,int b)
  {
    x=a;
    y=b;
  }
  int sum1();
  void display();
};
int sum::sum1()
{
  sum2 = x+y;
  return sum2;
}
void sum::display()
{
  cout<<x<<" + "<<y<<" = "<<sum2;
}
void main()
{
  clrscr();
  int a,b;
  cout<<"Enter two numbers ";
  cin>>a>>b;
  sum s(a,b);
  s.sum1();
  s.display();
  getch();
}


