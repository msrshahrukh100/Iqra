#include <iostream>
using namespace std;
class C_polygon
{
protected:
	int height,breadth;
public:
	C_polygon(int a,int b){
		height = a;
		breadth = b;
	}
	virtual float area(){
		cout<<"The area of polygon is : "<<endl;
		return 0;
	}
};

class C_rectangle: public C_polygon
{
public:
	C_rectangle(int a,int b):C_polygon(a,b){}
	virtual float area(){
		cout<<"The area of the rectangle is: ";
		return height*breadth;
	}
};

class C_triangle: public C_polygon
{
public:
	C_triangle(int a,int b):C_polygon(a,b){}
	virtual float area(){
		cout<<"The area of the triangle is: ";
		return float(height*breadth)/2;
	}


};

int main()
{
	C_polygon *pointer;
	C_rectangle objrec(5,3);
	C_triangle objtri(5,3);
	cout<<objrec.area()<<endl;
	cout<<objtri.area()<<endl;

	pointer = &objrec;
	cout<<pointer->area()<<endl;

	pointer = &objtri;
	cout<<pointer->area()<<endl;


	return 0;
}