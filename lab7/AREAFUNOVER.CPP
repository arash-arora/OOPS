#include<iostream.h>
#include<conio.h>
#include<math.h>
int area(int s)
{
  return s*s;
}
int area(int l,int b)
{
  return l*b;
}
int area(float a,float b,float c)
{
  float ar,s;
  s=(a+b+c)/2;
  ar=(s*(s-a)*(s-b)*(s-c));
  ar=pow(ar,0.5);
  return ar;
}
void main()
{
  clrscr();
  cout<<"SQUARE : "<<area(2)<<endl;
  cout<<"RECTANGLE : "<<area(2,3)<<endl;
  cout<<"TRIANGLE : "<<area(4.4,4.9,3.9);
  getch();
}

