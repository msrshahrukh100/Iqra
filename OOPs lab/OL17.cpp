// OOPS LAB ASSSIGNMENT 
// SUBMITTED BY
// Mohammad Shahrukh    13BCS-0044

#include <iostream>
#include <fstream>
using namespace std;


void add()
{
	string name,contactnumber;
	cout<<"Enter the name and contact number : "<<endl;
	cin>>name>>contactnumber;

	ofstream f;
	f.open("contacts.txt",ios::out | ios::app);
	f<<name<<endl<<contactnumber<<endl;
}

int search()
{
	string name,temp;	
	cout<<"Enter the name to be searched : ";
	cin>>name;
	ifstream f;
	f.open("contacts.txt");
	while(getline(f,temp))
	{
		if (temp == name)
		{
			cout<<"Name is in the contact list !"<<endl;
			return 1;
		}
	}
		cout<<"Name is not found "<<endl;
		return 0;
}

void delete_contact()
 {
 	string name,line;
 	cout << "Enter the name to be deleted: " <<endl;
 	cin >> name;
 	ifstream myfile;
 	ofstream temp;
 	myfile.open("contacts.txt");
 	temp.open("temp.txt");
 	while ( getline(myfile,line))
 	{
 		if ( line != name )
 		{
 			temp << line << endl;
 		}
 		else
 		{
 			cout << "The name was present and deleted successfully.";
 			getline(myfile,line);
 			getline(myfile,line);
 		}
 	}
 	myfile.close();
 	temp.close();
 	remove("contacts.txt");
 	rename("temp.txt","contacts.txt");
 }

int main()
{
	int c;
	while (1)
	{
		cout << "Enter the desired option : \n1)Add contact  2)Search contact  3)Delete contact  4)Exit"<<endl;
		cin>>c;
	switch (c)
	{
		case 1:
			add();
			break;
		case 2:
			search();
			break;
		case 3:
			delete_contact();
			break;
		case 4:
			return 0;
	}
	}
	add();
	search();
	
	return 0;
}