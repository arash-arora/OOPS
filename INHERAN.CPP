#include<iostream.h>
#include<conio.h>
class animal
{
  public:
  void eat()
  {
    cout<<"This animal eats \n";
  }
  void sleep()
  {
    cout<<"This animal sleeps \n";
  }
};
class dog : public animal
{
  public:
  void bark()
  {
    cout<<"This animal is a dog "<<endl;
    cout<<"So dog barks \n";
  }
};
class youngone : public dog
{
  public:
  void nameofyoungone()
  {
    cout<<"His name is Simba \n";
  }
};
void main()
{
  clrscr();
  youngone d;
  d.eat();
  d.sleep();
  d.bark();
  d.nameofyoungone();
  getch();
}
