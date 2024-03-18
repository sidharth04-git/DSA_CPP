#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Students : ";
    cin>>n;
    int marks[n]; // 0 to n-1 index hai
    cout<<"Enter Marks of Students : ";
    // Input
    for(int i=0; i<=n-1; i++)
    {
        cin>>marks[i];
    }
    // Condition + Output
    for(int i=0; i<=n-1; i++)
    {
        if(marks[i]<=35)
            cout<<i<<" ";
    }
}