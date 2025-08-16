#include<iostream>
using namespace std;
void greet(int n)
{
    if(n==0)
        return;
    cout<<"Good Morning"<<endl;
    greet(n-1);
}
int main()
{
    int n;
    cout<<"Enter how many time you want to print : ";
    cin>>n;
    greet(n);
}
