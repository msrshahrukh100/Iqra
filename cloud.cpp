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
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }

    int current = 0,steps = 0;
    while(current != (n-1))
    {
    	if((c[current + 2] == 1) || (current + 2) == n)
    		current ++;
    	else
    		current += 2;

    	steps++;
    }
    cout<<steps<<endl;

    return 0;
}