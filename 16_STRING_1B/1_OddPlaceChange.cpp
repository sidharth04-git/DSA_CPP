#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    int len = s.size();
    for(int i=0; i<=len-1; i++)
    {
        if(i%2!=0)
        {
            s[i] = '#';
        }
    }
    cout<<s;
}