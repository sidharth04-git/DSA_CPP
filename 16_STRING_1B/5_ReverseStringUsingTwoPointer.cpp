#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    cout<<s<<endl;
    int len = s.length();
    int i= 0;
    int j = len-1;
    while(i<j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s;
}