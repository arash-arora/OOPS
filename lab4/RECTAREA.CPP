#include<iostream.h>
#include<conio.h>
class Rectangle
{
  int l,b;
  public:
  Rectangle(float len=1.0, float br=1.0)
  {
    l=len;
    b=br;
  }
  float area()
  {
    return l*b;
  }
  int compare(Rectangle rect)
  {
    return this->area()>rect.area();
  }
};
void main()
{
  clrscr();
  int l1,b1,l2,b2;
  cout<<"Length of 1st rectangle ";
  cin>>l1;
  cout<<"Breadth of 1st rectangle 1 ";
  cin>>b1;
  cout<<"Length of 2nd rectangle ";
  cin>>l2;
  cout<<"Breadth of 2nd rectangle ";
  cin>>b2;
  Rectangle rect1(l1,b1);
  Rectangle rect2(l2,b2);
  if(rect1.compare(rect2))
  {
    cout<<"Area of rectangle 2 is less than rectangle 1";
  }
  else
  {
    cout<<"Area of rectangle 1 is less than rectangle 2";
  }
  getch();
}