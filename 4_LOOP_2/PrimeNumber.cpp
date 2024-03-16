#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number n : ";
    cin>>n;
    bool flag = true;        // Prime Hai
    for(int i=2; i<=n-1; i++)
    {
        if(n%i==0)         // i is a Factor
        {
            flag = false; // Composite Hai
            break;
        }
    }
    if(n==1)
        cout<<n<<" is Neither Prime Nor Composite ";
    else if(flag==true)
        cout<<n<<" is Prime Number ";
    else
        cout<<n<<" is Composite Number ";
}