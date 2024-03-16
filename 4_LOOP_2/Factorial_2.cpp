#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number ";
    cin>>n;
    int product = 1;
    for(int i=1; i<=n; i++)
    {
        product*=i;
        cout<<"Factorial of "<<i<<" is "<<product<<endl;
    }
    if(n==0)   // When User will give Input 0
        cout<<"Factorial of 0 is 1 ";
}