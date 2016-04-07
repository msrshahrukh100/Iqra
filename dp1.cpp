/*Coin change problem */

#include <iostream>
using namespace std;
#define infinity 99999
int a[20],n;
int coinchange(int amount)
{
	int temp,min = infinity;
	if (amount == 0)
		return 0;

	for(int i;i<n;i++)
	{
		if (a[i] < amount)
			temp = coinchange((amount - a[i]));

		if (temp < min)
			min = temp;
	}

	return min + 1;

}
int main()
{
	int amount;
	cout<<"Enter the amount whose change you want and the no.of different coins you have: ";
	cin>>amount>>n;
	for (int i=0;i<n;i++){
		cout<<"Enter the value of "<<i+1<<"th coin :";
		cin>>a[i];
	}

	cout<<"The minimum no.of coins required is : "<<coinchange(amount);




	
	return 0;
}