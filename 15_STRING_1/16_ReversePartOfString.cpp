#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str = "abcdef";
    cout<<str<<endl;
    // reverse string from idx - 2 to 4 (cde)
    reverse(str.begin()+2,str.begin()+4+1);
    cout<<str;
}