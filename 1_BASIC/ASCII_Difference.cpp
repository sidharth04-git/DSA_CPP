#include<iostream>
using namespace std;
int main()
{
    char x,y;
    cout<<"Enter First Character ";
    cin>>x;
    cout<<"Enter Second Character ";
    cin>>y;
    int a = (int)x;  // Typecaste Character into Integer
    int b = (int)y;
    int z = a-b;
    cout<<"The Difference is "<<z<<endl;
}