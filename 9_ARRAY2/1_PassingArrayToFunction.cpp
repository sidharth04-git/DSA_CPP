#include<iostream>
using namespace std;
void display(int a[] , int size) // int* a
{
    for(int i=0; i<=size-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int* b , int size)  // int b[]
{
    b[0] = 7;
}
int main()
{
    int arr[] = {4,7,8,6,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    // accessing element of array in another fn.
    // updation , pass by value/pass by reference
    display(arr,size);
    change(arr,size);
    display(arr,size);
}