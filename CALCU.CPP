#include<iostream.h>
#include<conio.h>
float add(float a, float b)
{
  return a+b;
}
float sub(float a, float b)
{
  return a-b;
}
float mul(float a, float b)
{
  return a*b;
}
float div(float a, float b)
{
  return a/b;
}
void main()
{
  clrscr();
  char op,ch;
  float a,b;
  float res;
  do{
  cout<<"Enter first number, operator, second number ";
  cin>>a>>op>>b;
  switch(op)
  {
    case '+' : res = add(a,b);
    break;
    case '-' : res = sub(a,b);
    break;
    case '*' : res = mul(a,b);
    break;
    case '/' : res = div(a,b);
    break;
    default : res = NULL;
	      cout<<"Invalid \n";
  }
  cout<<"Answer : "<<res<<endl;
  cout<<"Do another (Y/N)? ";
  cin>>ch;
  }while(ch=='y'|| ch=='Y');
getch();
}
