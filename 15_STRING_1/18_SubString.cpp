#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "abcdef";
    cout<<s<<endl;
    // s.substr(idx,len)--> iss idx aur iske aage se sari element le aao
    cout<<s.substr(1,4);
}