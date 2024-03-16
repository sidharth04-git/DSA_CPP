#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number n : ";
    cin>>n;
    for(int i=2; i<=n-1; i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is Composite Number ";
            break;
        }
        else
        {
            cout<<n<<" is Not Composite Number ";
            break;
        }
    }
}