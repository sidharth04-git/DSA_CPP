// In C++ Strings Are Mutable (We can change its Value)
#include<iostream>
using namespace std;
int main()
{
    string str = "Sidharth";
    cout<<str<<endl;
    str[0] = 'A';
    cout<<str;

}