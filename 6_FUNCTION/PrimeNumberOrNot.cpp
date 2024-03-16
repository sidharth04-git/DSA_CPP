#include<iostream>
using namespace std;
bool isprime(int n)
{
    bool flag = true;
    if(n<=1)
        return false;
    for(int i=2; i<=n-1; i++)
    {
        if(n%i==0)
        {
            flag = false; // not prime 
            break;
        }
    }
    return flag;
}
int main()
{
    int n;
    cout<<"Enter a Number n : "<<endl;
    cin>>n;
    if(isprime(n))
        cout<<"The Given Number is Prime ";
    else
        cout<<"The Given Number is Composite ";

}