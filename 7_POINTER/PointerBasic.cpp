#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    int* p = &x;
    cout<<&x<<endl;
    cout<<p;  // 0xa3265ff834
             //  0xa3265ff834
}