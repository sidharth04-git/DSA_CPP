#include<iostream>
using namespace std;
void square(int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<"Square of "<<i<<" is "<<i*i<<endl;
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter a Number n : ";
    cin>>n;
    square(n);
}
