#include<iostream>
using namespace std;
// void square(int n)
// {
//     cout<<n*n;
// }
void count(int n)
{
    int a = n;
    int count = 0;
    while(n>0)
    {
        n = n/10;
        count++;
    }
    if(a==0)
        cout<<1;
    else
        cout<<count*count<<endl;
    // square(a);
}
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    count(n);
}