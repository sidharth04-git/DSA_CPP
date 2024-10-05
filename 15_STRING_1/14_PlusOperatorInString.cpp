// Plus Operator is Used to Append
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "abc";
    string p = "def";
    cout<<s<<endl;
    s = s + p;
    cout<<s<<endl;
    s = s + "efg";
    cout<<s<<endl;
    s = s + 'd';
    cout<<s<<endl;
    // aage add krna hai toh
    s = "sid" + s;
    cout<<s;
}