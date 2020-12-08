#include<iostream.h>
#include<conio.h>
class stat
{
  static int a;
  int b;
  public:
  static int c;
 // static int d;
  void set(int i,int j)
  {
    a++;
    b=i;
    c=j;
  }
  void get()
  {
    cout<<"\nStatic a: "<<a<<endl<<"Non static b: "<<b<<endl<<"Static c: "<<c;
  }
};
int stat::c=10;
int stat::a=20;
void main()
{
  clrscr();
  stat s1;
  stat s2;
  s1.set(1,2);
  s2.set(3,4);
  s1.get();
  s2.get();


  getch();
}