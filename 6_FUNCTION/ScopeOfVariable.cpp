#include<iostream>
using namespace std;
int a = 5; // Global Variable
void f()
{
    cout<<a<<endl;
}
int main()
{
  
    cout<<a<<endl;
    f();
}