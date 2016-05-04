#include <iostream>
using namespace std;
template <class T>
T show(T a){
	cout<<a;
	return a;
}

int main()
{
	cout<<show(1.5)<<endl;
	
	return 0;
}