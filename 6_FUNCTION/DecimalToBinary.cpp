#include<iostream>
using namespace std;
int decimal_number(int n)
{
    int ans = 0;
    int pw = 1;
    while(n>0)
    {
        int parity_bit = n%2;
        ans+= parity_bit*pw;
        n/=2;
        pw*=10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter a Decimal Number ";
    cin>>n;
    int ans = decimal_number(n);
    cout<<"Binary Representation is "<<ans<<endl;
}
