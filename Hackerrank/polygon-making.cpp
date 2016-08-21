#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    if(n == 1)
    {
        cout<<"2"<<endl;
        return 0;
    }
    if(n == 2)
    {
        cout<<"1"<<endl;
        return 0;
    }
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }

    sort(a.begin(),a.end());

    int sum = 0;
    for(int i=0; i<n-1; i++)
    	sum += a[i];

    if(sum > a[n-1])
    	cout<<"0"<<endl;
    else
    {
        int answer = 0;
        while(a[n-1] > 0)
        {
            a[n-1] = a[n-1] - sum;
            answer++;
        }
    	cout<<answer<<endl;
        
    }
    return 0;
}
