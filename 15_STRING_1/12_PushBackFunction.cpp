// Used to Insert a Single Character in the String in the End
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "abcd";
    cout<<str<<endl;
    str.push_back('e');
    str.push_back('f');
    str.push_back('g');
    cout<<str;
}