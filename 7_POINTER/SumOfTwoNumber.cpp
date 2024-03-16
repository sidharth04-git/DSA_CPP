#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int* p1 = &a; // Pointer Variable
    int* p2 = &b;
    cout<<"Enter 1st Number : ";
    cin>>*p1; // I/P Using Dereference Operator
    cout<<"Enter 2nd Number : ";
    cin>>*p2;
    cout<<"Sum is : "<<(*p1+*p2);
}