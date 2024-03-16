#include<iostream>
using namespace std;
void fun(int x, int y) // Formal Parameter
{
    cout<<"Address of Fun x " <<&x<<endl;
    cout<<"Address of Fun y " <<&y;
}
int main()
{
    int x = 5,y = 10;
    cout<<"Address of Main x " <<&x<<endl;
    cout<<"Address of Main y " <<&y<<endl;
    fun(x,y); // Actual Parameter
}