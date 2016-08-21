#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mealCost,tip,tax,temp;
    int totalCost,tipPercent,taxPercent;
    cin>>mealCost;
    cin>>tipPercent>>taxPercent;
    tip = mealCost * tipPercent * 0.01;
    tax = mealCost * taxPercent * 0.01;
    temp = (mealCost+tip+tax) - int((mealCost+tip+tax));
    if (temp > 0.5) 
	    cout<<"The total meal cost is "<<int(mealCost+tip+tax)+1<<" dollars.";
	else
	    cout<<"The total meal cost is "<<int(mealCost+tip+tax)<<" dollars.";

    return 0;
}