#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    cout<<"Value of a before Swap is "<<a<<endl;
    cout<<"Value of b before Swap is "<<b<<endl;
    // FORMULA
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"Value of a after Swap is "<<a<<endl;
    cout<<"Value of b after Swap is "<<b<<endl;
}



