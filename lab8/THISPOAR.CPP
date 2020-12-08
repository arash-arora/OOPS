#include<iostream.h>
#include<conio.h>
class Areaa
{
  float height,length,breadth;
  public:
  void ar(int s=1)
  {
    length = s;
    height=0;
  }
  void ar(float l=1.0, float b=1.0, float h=1.0)
  {
    length = l;
    breadth = b;
    height = h;
  }
  float area()
  {
    if(height==0)
      return length*length;
    else
      return 2*(length+breadth)*height;
  }
  int compare(Areaa a)
  {
    return this->area() > a.area();
  }
};
void main()
{
  clrscr();
  float len2,b2,h2;
  int s;
  cout<<"Side for square : ";
  cin>>s;
  cout<<"Length for rectange : ";
  cin>>len2;
  cout<<"Breadth for rectangle : ";
  cin>>b2;
  cout<<"Height for rectangle : ";
  cin>>h2;
  Areaa a1,a2;
  a1.ar(s);
  a2.ar(len2,b2,h2);
  if(a1.compare(a2))
  {
    cout<<"Area of square is more than rectange ";
  }
  else
    cout<<"Area of square is less than rectange ";

  getch();
}




