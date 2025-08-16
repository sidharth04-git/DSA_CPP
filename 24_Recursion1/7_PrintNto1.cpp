#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0)  // Base Case 
        return;
    cout<<n<<endl;  // kaam 
    print(n-1);    // call
}
int main()
{
    int n;;
    cout<<"Enter n : ";
    cin>>n;
    print(n);
}