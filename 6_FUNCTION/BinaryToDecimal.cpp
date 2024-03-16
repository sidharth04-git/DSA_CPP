#include<iostream>
using namespace std;
int binary_number(int n)
{
    int sum = 0;
    int pw = 1;
    while(n>0)
    {
        int unit_digit = n%10;
        sum+=(unit_digit*pw);
        n/=10;
        pw*=2;
    }
    return sum;
}
int main()
{
    int n; // Store a binary Number 
    cout<<"Enter a Binary Number ";
    cin>>n;
    int ans = binary_number(n);
    cout<<ans<<endl;
}

