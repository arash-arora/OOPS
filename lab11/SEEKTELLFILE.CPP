#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void main()
{
  clrscr();
  int i,pos;
  ofstream fil;
  char line[20],ch;
  fil.open("sample.txt");
  cout<<"Current position of Pointer is "<<fil.tellp()<<endl;
  fil.seekp(2);
  pos=fil.tellp();
  cout<<"Current posittion : "<<pos<<endl;
  cout<<"Enter the text ";
  gets(line);
  fil.seekp(pos-2);
  fil.write("I am",5);
  fil<<line;
  fil.close();
  ifstream fl;
  fl.open("sample.txt");
  fl.seekg(0);
  cout<<"Current position is "<<fl.tellg()<<endl;
  while(!fl.eof())
  {
    fl.get(ch);
    cout<<ch;
  }
  fl.close();
  getch();
}
