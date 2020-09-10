#include<iostream.h>
#include<conio.h>
class mammal
{
  public:
  void eggs()
  {
    cout<<"Mammal can produce eggs "<<endl;
  }
};
class wingedmammal
{
  public:
  void fly()
  {
    cout<<"Mammal can fly "<<endl;
  }
};
class bat : public mammal, public wingedmammal
{
  public:
  void batt()
  {
    cout<<"Hey! I'm BAT a mammal and I can fly!!! "<<endl;
  }
};
void main()
{
  clrscr();
  bat b;
  b.eggs();
  b.fly();
  b.batt();
  getch();
}