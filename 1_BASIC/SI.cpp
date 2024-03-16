#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    float value,si,p,r,t;
    cout<<"Enter Rate ";
    cin>>r;
    cout<<"Enter Principal ";
    cin>>p;
    cout<<"Enter Time ";
    cin>>t;
    si = (p*r*t)/100;
    value = p+si;
    cout<<"Simple Interest is : "<<si<<endl;
    cout<<"Total Value is : "<<value<<endl;
    getch();
}