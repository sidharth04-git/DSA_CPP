#include<iostream>
using namespace std;

int fact(int n)
{

    if(n==1 || n==0)  // Base Case 
        return 1;
    int ans = n*fact(n-1);  // kaam and call
    return ans; // return
    
}
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<fact(n);
}

// Optimize Factorial Code using recursive Solution 