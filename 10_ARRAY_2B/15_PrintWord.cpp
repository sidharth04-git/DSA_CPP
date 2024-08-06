//print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
// Else if  and it is an even number, then print "even".
// Else if  and it is an odd number, then print "odd".
#include<iostream>
using namespace std;
void printWord(int num)
{
    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(num>=0 && num<=9)
        cout<<arr[num];
    else if(num%2==0)
        cout<<"even";
    else
        cout<<"odd";
}
int main()
{
    int a,b;
    cout<<"Enter First Number ";
    cin>>a;
    cout<<"Enter Second Number ";
    cin>>b;
    // Iterate through the inclusive interval between a and b
    for(int i=a; i<=b; i++)
    {
     
        printWord(i);
        cout<<endl;
    }
    
}