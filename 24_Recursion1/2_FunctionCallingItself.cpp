#include<iostream>
using namespace std;

void fun()
{
    cout<<"Hello PW"<<endl;
    fun(); // infinite loop
}
int main()
{
    fun();
}