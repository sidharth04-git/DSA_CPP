#include<iostream>
using namespace std;
float area(float r)
{
    float Area = 3.1415*r*r;
    return Area;
}
int main()
{
    float r;
    cout<<"Enter Radius of Circle : ";
    cin>>r;
    cout<<area(r)<<endl;
}