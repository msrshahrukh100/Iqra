#include <iostream>
#include <vector>
using namespace std;
bool are_not_equal(int h1,int h2, int h3)
{
	if(h1 == h2 && h2 == h3)
		return false;
	return true;
}
int find_max(int *a)
{
	int temp = max(a[0],max(a[1],a[2]));
	if(temp == a[0])
		return 0;
	else if(temp == a[1])
		return 1;
	else if(temp == a[2])
		return 2;

	return -1;
}
int main()
{
	int n1,n2,n3;
	int h[3] = {0};

	cin>>n1>>n2>>n3;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	int temp;
	for(int i=0; i<n1; i++)
	{
		cin>>temp;
		v1.push_back(temp);
		h[0] += temp;
	}

	for(int i=0; i<n2; i++)
	{
		cin>>temp;
		v2.push_back(temp);
		h[1] += temp;	
	}

	for(int i=0; i<n3; i++)
	{
		cin>>temp;
		v3.push_back(temp);
		h[2] += temp;	
	}
	while(are_not_equal(h[0],h[1],h[2]))
	{
		int m = find_max(h);
		switch (m)
		{
			case 0 :
				h[0] -= v1.front();
				v1.erase(v1.begin());
				break;
			case 1 :
				h[1] -= v2.front();
				v2.erase(v2.begin());
				break;
			case 2 :
				h[2] -= v3.front();
				v3.erase(v3.begin());
				break;  
		}
	}
	cout<<h[0];


	
	return 0;
}