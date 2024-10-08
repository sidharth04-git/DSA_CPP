#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    int len = s.size();
    cout<<s.substr(len/2);
}