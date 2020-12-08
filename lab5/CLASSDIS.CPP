#include<iostream.h>
#include<conio.h>
class distance
{
 float d1,d2,d3,d4;
 public:
 distance(float am,float bm)
 {
   d1=am;
   d2=bm;
 }
 int add()
 {
   return d1+d2;
 }

 int add1(distance d)
 {
   float sum1,sum2,dif1,dif2;
   sum1 = this->add();
   sum2 = d.add();
   dif1 = this->diff();
   dif2 = d.diff();
   cout<<"DISTANCE IN KM: "<<sum1<<endl<<"DISTANCE IN METRES: "<<sum2<<endl;
   cout<<"DIFFERENCE OF DISTANCE IN KM: "<<dif1<<endl<<"DIFFENRENCE OF DISTANCE IN METERS: "<<dif2;
   getch();
 }
 int diff()
 {
   return d1-d2;
 }
};
void main()
{
  clrscr();
  float am,ak,bm,bk,sum,sub;
  int p[2];
  int ch,i;
  cout<<"Distance 1 in metres: ";
  cin>>am;
  cout<<"Distance 1 in kilo metres: ";
  cin>>ak;
  cout<<"Distance 2 in metres: ";
  cin>>bm;
  cout<<"Distance 2 in kilo metres: ";
  cin>>bk;
  distance dis1(ak,bk);
  distance dis2(am,bm);
  cout<<"______________________________________________"<<endl;
  dis1.add1(dis2);
  getch();
}