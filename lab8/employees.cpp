#include<iostream.h>
#include <iostream>
#include <string>

class employee
{
	string name;
	int id;
	public:
		void getdata()
		{
            cout << "Enter name: ";
			      cin >> name;
            cout << "Enter id: ";
            cin >> id;
		}
		void display()
		{
            cout << "ID: " << id << " ";
			cout << "NAME: " << name<<"\n";
		}
};

const int no_of_employee = 5;

int main()
{
	employee st[no_of_employee];
	for( int i=0; i < no_of_employee; i++ )
	{
		cout << "Employee " << i + 1;
		st[i].getdata();
	}

	for( int i=0; i < no_of_employee; i++ )
	{
		cout << "\nEmployee " << i + 1;
		st[i].display();
	}
	return 0;
}
