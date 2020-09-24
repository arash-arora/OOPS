#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void main()
{
  clrscr();
  ofstream fil;
  char line[20],ch;
  fil.open("sample.txt");
  cout<<"Enter the text ";
  gets(line);
  fil<<line;
  fil.close();
  ifstream fl;
  fl.open("sample.txt");
  while(!fl.eof())
  {
    fl.get(ch);
    cout<<ch;
  }
  fl.close();
  getch();
}
