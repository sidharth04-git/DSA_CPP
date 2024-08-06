#include<iostream>
using namespace std;
#include<string>
void printWord(int n)
{
    // Array of String
    string s[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n>=0 && n<=9)
    {
        cout<<s[n];
    }
    else
    {
        cout<<"input is greaater than 9";
    }
    
}
int main()
{
    int num;
    cout<<"Enter a Number in between 0 to 9 "<<endl;
    cin>>num;
    printWord(num);
}