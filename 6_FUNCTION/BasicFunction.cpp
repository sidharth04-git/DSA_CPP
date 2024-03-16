#include<iostream>
using namespace std;
void starTriangle(int x) // Fn. Defination
{
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    starTriangle(3); // Fn. Call
    cout<<"Hello World"<<endl;
    starTriangle(4);
    starTriangle(5);
}