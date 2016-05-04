// OOPS LAB ASSSIGNMENT 
// SUBMITTED BY
// Mohammad Shahrukh    13BCS-0044

#include <iostream>
using namespace std;
class Student {
	string name;
	int m[3];
	float average;
public:
	friend void mark_avg(Student *);

	void get_data(){
		cout<<"Enter the name of the student : ";
		cin>>name;
		cout<<"Enter the marks in three subjects: ";
		for (int i=0;i<3;i++)
			cin>>m[i];
	}

	void display(){
		cout<<"Name of the student is : "<<name<<endl;
		cout<<"The average marks obtained in 3 subjects is : "<<average<<endl;
	}


};

void mark_avg(Student * s)
{
	s->average = (s->m[0]+s->m[1]+s->m[2])/3;
}

int main()
{
	Student obj;
	obj.get_data();
	mark_avg(&obj);
	obj.display();
	
	return 0;
}