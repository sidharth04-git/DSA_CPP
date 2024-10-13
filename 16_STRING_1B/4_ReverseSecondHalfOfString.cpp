#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a String ";
    getline(cin,s);
    cout<<s<<endl;
    int len = s.length();
    reverse(s.begin()+len/2, s.begin()+len);
    cout<<s;
}