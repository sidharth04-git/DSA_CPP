#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String "<<endl;
    getline(cin,str);
    cout<<str<<endl;
    int len = str.size();
    reverse(str.begin(),str.begin()+len/2);
    cout<<str;
}