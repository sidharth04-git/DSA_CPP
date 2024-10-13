#include<iostream>
#include<string>
using namespace std;
bool isConsonant(char ch) // bool return type hai aur character recieve krega fn.
{
    if(ch<65)
        return false;
    else if(ch>90 && ch<97)
        return false;
    else if(ch>122)
        return false;
    else if(ch=='a'|| ch=='A')
        return false;
    else if(ch=='e'|| ch=='E')
        return false;
    else if(ch=='i'|| ch=='I')
        return false;
    else if(ch=='o'|| ch=='O')
        return false;
    else if(ch=='u'|| ch=='U')
        return false;
    else 
        return true;
}

int main()
{
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    int count = 0;
    for(int i=0; i<=s.size()-1; i++)
    {
        if(isConsonant(s[i]))
            count++;
    }
    cout<<count;
}