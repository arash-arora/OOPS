#include<iostream.h>
#include<conio.h>
class complex
{
  float x;
  float y;
  public:
  complex()
  {}
  complex(float real,float imag)
  {
    x=real;
    y=imag;
  }
  friend complex operator+ (complex, complex);
  void display();
};
complex operator + (complex c,complex d)
{
    complex temp;
    temp.x = d.x + c.x;
    temp.y = d.y + c.y;
    return temp;
}
void complex::display()
{
  cout<<x<<" + i"<<y;
}
void main()
{
  clrscr();
  complex c1(2.5,3.5);
  complex c2(2.6,4.7);
  complex c3;
  c3 = c1+c2;
  cout<<"c1 = ";
  c1.display();
  cout<<endl;
  cout<<"c2 = ";
  c2.display();
  cout<<endl;
  cout<<"c3 = ";
  c3.display();
  cout<<endl;
  getch();
}
