// Count Number of Digit without using loop
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    string s = to_string(n);  // Convert Int to String
    int len = s.size();
    cout<<"The Number of Digit is "<<len;
}