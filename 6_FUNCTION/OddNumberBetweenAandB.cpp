#include<iostream>
using namespace std;
void oddNumber(int a, int b)
{
    for(int i=a; i<=b; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int a,b;
    cout<<"Enter First Number a : ";
    cin>>a;
    cout<<"Enter Second Number b : ";
    cin>>b;
    oddNumber(a,b);
}