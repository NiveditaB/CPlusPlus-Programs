#include<iostream>
using namespace std;
int glo = 6; // global variable

void sum()
{
    cout<<glo<<"\n";
}
int main()
{ 
    int glo = 9; //Local variable with same name as global.
    glo = 78;
    sum();
    cout<<glo; //Local variable value will be printed as preference will be given to local over global.
}
