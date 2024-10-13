#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a String ";
    getline(cin,s);
    int n = s.length();
    int i = n/2;
    int j = n-1;
    cout<<s<<endl;
    while(i<j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s; // Direct bina loop ke print krwa skte hai

}