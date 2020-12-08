#include<iostream.h>
#include<conio.h>
class space
{
  int x,y,z;
  public:
  void getdata(int a,int b,int c)
  {
    x=a;
    y=b;
    z=c;
  }
  void disp()
  {
    cout<<x<<endl<<y<<endl<<z<<endl;
  }
  void operator-()
  {
    x=-x;
    y=-y;
    z=-z;
  }
};
void main()
{
  clrscr();
  space s;
  s.getdata(10,-20,-30);
  cout<<"BEFORE : "<<endl;
  s.disp();
  cout<<"AFTER : "<<endl;
  -s;
  s.disp();
  getch();
}