#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    int* ptr = &x;
    cout<<ptr<<endl;
    ptr = ptr + 1; // 4 se aage badh jayega address int me
    cout<<ptr;
}