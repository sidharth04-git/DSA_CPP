#include<iostream>
using namespace std;
bool powerOfTwo(int n)
{
    if(n==0)
        return false;
    while(n!=1)
    {
        if(n%2!=0)
        {
            return false;
        }
        else
        {
            n/=2;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    bool ans = powerOfTwo(n);
    if(ans==0)
        cout<<"False";
    else
        cout<<"True";
}