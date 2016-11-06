#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];
    int total_swaps = 0;
    for(int i=0; i<n-1; i++)
    {
        int swaps = 0;
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                swaps++;
            }
        }
        total_swaps += swaps;
        if(swaps == 0)
            break;
    }

    cout<<"Array is sorted in "<<total_swaps<<" swaps."<<endl<<"First Element: "<<a[0]<<endl<<"Last Element: "<<a[n-1]<<endl;

    // for(int i=0; i<n; i++)
    //     cout<<a[i]<<endl;
    // cout<<total_swaps;
    return 0;
}