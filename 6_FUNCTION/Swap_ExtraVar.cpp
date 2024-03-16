#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    cout<<"Value of a before Swap is "<<a<<endl;
    cout<<"Value of b before Swap is "<<b<<endl;
    // SWAP FORMULA  // a = 5 , b = 8
    temp = a;       // temp = 5
    a = b;         //  a = 8
    b = temp;     //   b = 5
    cout<<"Value of a after Swap is "<<a<<endl;
    cout<<"Value of b after Swap is "<<b<<endl;
}