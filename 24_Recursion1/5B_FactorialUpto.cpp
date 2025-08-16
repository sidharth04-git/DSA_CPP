#include<iostream>
using namespace std;
void factUpto(int n){
    int f = 1;
    for(int i=1; i<=n; i++)
    {
        f = f * i;
        cout<<f<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    factUpto(n);
}