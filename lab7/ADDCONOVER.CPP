#include<iostream.h>
#include<conio.h>
class add
{
  double d;
  int c;
  public:
  add(int a,int b)
  {
    d=a+b;
  }
  add(double x,double y)
  {
    d = x+y;
  }
  void disp()
  {
    cout<<d<<endl;
  }
};
void main()
{
  clrscr();
  add a0();
  add a1(2,3);
 // cout<<"%d",a1(2,3);
  add a2(2.45,3.53);
  a1.disp();
  a2.disp();
  getch();
}
