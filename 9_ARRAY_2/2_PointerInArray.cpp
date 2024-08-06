#include<iostream>
using namespace std;
int main()
{
    int arr[] = {7,5,9,1,0,3};
    int* ptr1 = arr;       // Store Address of 1st Element
    // int* ptr = &arr;
    int* ptr2 = &arr[0];  // Store Address of 1st Element
    // int* ptr = arr[0];
    cout<<ptr1<<endl;
    cout<<ptr2;
}




