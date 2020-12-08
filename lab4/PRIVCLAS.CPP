#include<iostream.h>
#include<conio.h>
class priv
{
  int a;
  int b;
  public:
  priv()
  {
    a=56;
    b=1;
  }
};
void main()
{
  clrscr();
  priv p;
  int *a=(int*)&p;
  cout<<"Accessing private data members.. "<<endl;
  cout<<"Private a: "<<*a<<endl;
  cout<<"Private b: "<<*(a+1)<<endl;
  *a = 10;
  *(a+1)=12;
  cout<<"Changing values of private members.. "<<endl;
  cout<<"New Private a: "<<*a<<endl;
  cout<<"New Private b: "<<*(a+1)<<endl;
  getch();
}

