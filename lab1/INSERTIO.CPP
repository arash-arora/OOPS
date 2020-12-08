#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int n, arr[10],i,key,j;
  cout<<"ENTER THE SIZE OF THE ARRAY : ";
  cin>>n;
  cout<<"Enter the elements of the array ";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Before Sorting \n";
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<"\t";
  }
  cout<<endl;

  for(i=1;i<n;i++)
  {
    key=arr[i];
    j=i;
    while(j>0 && arr[j-1]>key)
    {
      arr[j]=arr[j-1];
      j--;
    }
    arr[j]=key;
  }
  cout<<"After Sorting \n";
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<"\t";
  }
  getch();
}
