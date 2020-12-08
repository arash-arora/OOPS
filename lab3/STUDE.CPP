#include<iostream.h>
#include<conio.h>
#include<string.h>
class physics
{
  public:
  int phy;
  void markp()
  {
    cout<<"Physics : ";
    cin>>phy;
  }
};
class chemistry
{
  public:
  int chem;
  void markc()
  {
    cout<<"Chemistry : ";
    cin>>chem;
  }
};
class maths
{
  public:
  int math;
  void markm()
  {
    cout<<"Maths : ";
    cin>>math;
  }
};
class marks : public physics, public chemistry, public maths
{
  int avg,tmarks;
  public:
  int roll;
  char name[10];
  void get_data()
  {
    cout<<"Name : ";
    cin>>name;
  }
  void average()
  {
    tmarks = phy+chem+math;
    avg = (tmarks/3);
  }
  void show()
  {
    cout<<"Name : "<<name<<endl;
    cout<<"Roll number : "<<roll<<endl;
    cout<<"Phyics : "<<phy<<endl;
    cout<<"Chemistry : "<<chem<<endl;
    cout<<"Maths : "<<math<<endl;
    cout<<"Average marks : "<<avg<<endl;
  }
};
void main()
{
  clrscr();
  int n,i;
  char ch[10];
  cout<<"Enter the number of students ";
  cin>>n;
  marks m[5];
  for(i=1;i<=n;i++)
  {
    m[i].get_data();
    m[i].roll=i;
    m[i].markp();
    m[i].markc();
    m[i].markm();
    m[i].average();
  }
  cout<<"Enter the name you wanna search ";
  cin>>ch;
  for(i=1;i<=n;i++)
  {
    if(strcmpi(ch,m[i].name)==0)
    {
      cout<<"________________________________________________\n";
      m[i].show();
    }
  }
  getch();
}



