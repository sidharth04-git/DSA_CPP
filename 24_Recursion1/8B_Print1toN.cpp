// Print 1 to N using extra parameter
#include<iostream>
using namespace std;
void print(int i , int n)
{
    if(i>n)
        return;
    cout<<i<<endl;
    print(i+1 , n);
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<endl;
    print(1 , n);
}