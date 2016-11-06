#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
   int val;
   char a[15];
   
   strcpy(a,"98993489");
   val = atoi(a);
   cout<<val;
   return(0);
}