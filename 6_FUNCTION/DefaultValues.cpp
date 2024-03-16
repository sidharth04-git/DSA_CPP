#include<iostream>
using namespace std;

void fun(int x=5, int y=10)
{
    cout<<x<<" "<<y<<endl;
}

int main()
{
    fun();
    fun(4,5);
    fun(4.5,8);
}