#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    int len = s.size();
    int count = 0;
    for(int i=0; i<=len-1; i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        continue;
        count++;
    }
    cout<<count;
}