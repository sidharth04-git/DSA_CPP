#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character ";
    cin>>ch;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    cout<<"It is an Alphabet ";
    else
    cout<<"It is Not an Alphabet ";
}