// OOPS LAB ASSSIGNMENT 
// SUBMITTED BY
// Mohammad Shahrukh    13BCS-0044

#include<iostream>
 using namespace std;
 class Student
 {
     protected:
 	char name[50];
 	int cls,rollno,age;
 	public:
 		friend istream & operator >>(istream &din ,Student &a)
 		{
 			cout<<"\nEnter Your name :";
 			din>>a.name;
 			cout<<"\nEnter your class :";
 			din>>a.cls;
 			cout<<"\nEnter your rollno :";
 			din>>a.rollno;
 			cout<<"\nEnter your age :";
 			din>>a.age;
 			return din;
 		}
 		friend ostream &operator<<(ostream &dout ,Student &a)
 		{
 			dout<<"\nYour name :"<<a.name;
 			dout<<"\nyour class :"<<a.cls;
 			dout<<"\nyour rollno :"<<a.rollno;
 			dout<<"\nyour age :"<<a.age;
 			return dout;
 		}
 };
 int main()
 {
 	Student a;
 	cin>>a;
 	cout<<a;
 	return 0;
 }

