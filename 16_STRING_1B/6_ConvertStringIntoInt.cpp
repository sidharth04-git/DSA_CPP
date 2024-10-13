#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    int n = s.length();
    int x = 0;
    for(int i=0; i<=n-1; i++)
    {
        x*=10;
        x+=s[i]-48;
    }
    cout<<x;

}