// OOPS LAB ASSSIGNMENT 
// SUBMITTED BY
// Mohammad Shahrukh    13BCS-0044

#include <iostream>
using namespace std;
int i,j;
class Matrix
{
	int a[3][3];
public:
	void get_data(){
		cout<<"Enter the elements of matrix row wise: "<<endl;
		for (i=0;i<3;i++)
			for(j=0;j<3;j++)
			{
				cin>>a[i][j];
			}
	}

	Matrix operator + (Matrix mat){

		Matrix temp;
		for (i=0;i<3;i++)
			for (j=0;j<3;j++)
			{
				temp.a[i][j] = this->a[i][j] + mat.a[i][j];
			}

		return temp;

	}

	Matrix operator - (Matrix mat){

		Matrix temp;
		for (i=0;i<3;i++)
			for (j=0;j<3;j++)
			{
				temp.a[i][j] = this->a[i][j] - mat.a[i][j];
			}

		return temp;

	}

	void show(){
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<a[i][j]<<"   ";
			}
			cout<<endl;
		}
	}



};
int main()
{
	Matrix a,b,c,d;
	a.get_data();
	b.get_data();

	c = a + b;
	d = a - b;

	cout<<"Matrix A is : "<<endl;
	a.show() ;
	cout<<"Matrix B is : "<<endl;
	b.show();
	cout<<"Sum of the matrix is : "<<endl;
	c.show();
	cout<<"Difference of matrix is : "<<endl;
	d.show();

	
	return 0;
}