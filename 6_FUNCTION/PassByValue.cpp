#include<iostream>
using namespace std;
void swap(int a, int b) // Alag dabba bana a and b
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}
int main()
{
    int a,b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    swap(a,b); // Pass By Value hua 
    cout<<"Value of a is "<<a<<endl<<"Value of b is "<<b<<endl;
}