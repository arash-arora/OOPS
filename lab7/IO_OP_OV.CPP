#include<iostream.h>
#include<conio.h>
class distance
{
  int feet;
  int inches;
  public:
  distance()
  {
    feet=0;
    inches=0;
  }
  distance(int f, int i)
  {
    feet=f;
    inches=i;
  }
  friend ostream &operator <<( ostream &output, const distance&d)
  {
    output<<"F: "<<d.feet<<"I: "<<d.inches;
    return output;
  }
  friend istream &operator >>( istream &input, distance &d)
  {
    input >> d.feet>>d.inches;
    return input;
  }
};
void main()
{
  clrscr();
  distance d1(11,10),d2(5,11),d3;
  cout<<"Enter the val of object : "<<endl;
  cin>>d3;
  cout<<"1st distance : "<<d1;
  cout<<"2nd distance : "<<d2;
  cout<<"3rd distance : "<<d3;
  getch();
}

