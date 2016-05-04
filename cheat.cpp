#include <fstream>
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// void add_contact()
// {
// 	string name;
// 	string mobile_no;

// 	cout << "Enter name: " <<endl;
// 	cin >> name;
// 	cout << "Enter mobile_no: " << endl;
// 	cin >> mobile_no;

// 	ofstream myfile;

// 	myfile.open("shah.txt",ios::app | ios :: out );

// 	myfile  << name << endl << mobile_no <<endl ;

// 	myfile.close();
// }

// void delete_contact()
// {
// 	string name,line;

// 	cout << "Give the name to be deleted: " <<endl;

// 	cin >> name;

// 	ifstream myfile;

// 	ofstream temp;

// 	myfile.open("shah.txt");

// 	temp.open("temp.txt");

// 	while ( getline(myfile,line))
// 	{
// 		if ( line != name )
// 		{
// 			temp << line << endl;
// 		}
// 		else
// 		{
// 			cout << "The name was present and deleted successfully.";
// 			getline(myfile,line);
// 			getline(myfile,line);
// 		}
// 	}

// 	myfile.close();
// 	temp.close();

// 	remove("shah.txt");

// 	rename("temp.txt","shah.txt");

// }

// int search_contact()
// {
// 	string name,line;

// 	cout << "Enter the name to be searched: " << endl;

// 	cin >> name;

// 	ifstream myfile;

// 	myfile.open("shah.txt");

// 	while ( getline(myfile,line))
// 	{
// 		if ( line == name)
// 		{
// 			cout << "Search successful!. The name is found."<< endl;
// 			return 1;
// 		}
// 	}
// 	cout << "Search unsuccessful. Name is not found .";
// 	return 0;
// }

// int main()
// {
	
// 	int choice;

// 	while (1)
// 	{
// 		cout << "\nMENU\n" <<endl;

// 		cout << "1. Add 2. Delete 3. Search 4. Exit"<<endl;
// 		cout << "Enter your choice: " <<endl;

// 		cin >> choice;

// 		switch(choice)
// 		{
// 			case 1: 
// 				add_contact();
// 				break;
// 			case 2: 
// 				delete_contact();
// 				break;
// 			case 3:
// 				search_contact();
// 				break;

// 			case 4:
// 				exit(1);
// 			default:
// 				cout<< "Please Enter a correct choice.";
// 				break;
// 		}
// 	}


// }

