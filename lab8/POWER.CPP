#include<iostream.h>
#include<conio.h>
class power
{
  float x;
  public:
  power(float p)
  {
    x=p;
  }
  void pow()
  {
    int i;
    for(i=2;i<x-1;i++)
    {
      if(i*i== x)
      {
	cout<<i<<" is the square root of "<<x<<"\n";
      }
      if(i*i*i == x)
      {
	cout<<i<<" is the cube root of "<<x<<endl;
      }
    }
  }
};
void main()
{
  clrscr();
  float p;
  cout<<"Enter a number ";
  cin>>p;
  power p1(p);
  p1.pow();
  getch();
}

