#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4,7,9,6,8,1,0};
    int* ptr = arr;               // &arr[0]
    cout<<*ptr<<endl;            // ptr[0] == 4;
    ptr[0] = 7;                 // arr[0] = 7 yha * nhi lgega 
    for(int i=0; i<=6; i++)
    {
        cout<<ptr[i]<<" ";  // Print Value of Array using Pointer
        // i[ptr] --> can also used to print 
    }
}