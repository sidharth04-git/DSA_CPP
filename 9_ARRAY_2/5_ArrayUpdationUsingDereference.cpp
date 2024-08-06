#include<iostream>
using namespace std;
int main()
{
    int arr[] = {7,4,5,1,0,3,9};
    int* ptr = arr;  // Ptr is Pointing to 1st Element
    *ptr = 8;       // ptr[0] = 8
    ptr++;         // Ptr is Pointing to 2nd Element
    *ptr = 1;     // ptr[1] = 1;
    ptr--;       // Ptr is Pointing to 1st Element
    for(int i=0; i<=6; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;


}