#include <iostream>
using namespace std;
int count = 0;
class Test
{
public: 
	Test()
	{
		count++;
		cout<<"One object created, Total no.of objects : "<<count<<endl;
	}

	~Test()
	{
		count--;
		cout<<"One object destroyed, Total no.of objects : "<<count<<endl;
	}

};

int main()
{
	Test obj1;
	Test obj2;

	{
		Test obj3;
	}


	
	return 0;
}