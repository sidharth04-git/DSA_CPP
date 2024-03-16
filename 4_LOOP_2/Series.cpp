// 1-2+3-4+5-6... upto n
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number n : ";
    cin>>n;
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        if(n%i!=0)
            sum+=i;
        else
            sum-=i;
    }
    cout<<sum<<" ";
}