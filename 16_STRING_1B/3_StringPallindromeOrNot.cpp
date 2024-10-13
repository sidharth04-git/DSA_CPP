#include<iostream>
using namespace std;
#include<string>
bool isPalindrome(string &s)
{
    int i = 0;  // point at 0th idx
    int j = s.length()-1;  // point at last idx
    while(i<j)
    {
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    if(isPalindrome(s))
        cout<<"The Given String is Palindrome ";
    else
        cout<<"The Given String is not Palindrome ";
}

