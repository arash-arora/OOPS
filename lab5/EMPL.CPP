#include<iostream.h>
#include<conio.h>
class emp
{
  int id,salary;
  char name[50];
  public:
  void getdata()
  {
    cout<<"ID: ";
    cin>>id;
    cout<<"Name: ";
    cin>>name;
    cout<<"Salary: ";
    cin>>salary;
  }
  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"Salary: "<<salary<<endl;
  }
};
void main()
{
  emp e[10];
  char ch;
  int i=0,j=0;
  clrscr();
  do{
    e[i].getdata();
    cout<<"Press y to enter more records ";
    cin>>ch;
    i++;
  }while(ch=='y');


  cout<<"*****************************************************\n";
  cout<<"RECORDS\n";
  for(j=0;j<i;j++)
  {
    e[j].display();
  }

  getch();
}

