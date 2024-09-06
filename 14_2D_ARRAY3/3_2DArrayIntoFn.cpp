// Size must be given while passing in fn.
#include<iostream>
using namespace std;
void change2DArray(int a[3][3])  // Row And Column size should be must
{
    a[0][0] = 8;
}
void change(int b[])
{
    b[0] = 7; // a[0] ki value ab 7 ho gyi
}
int main()
{
    // 1D Array is Pass By Reference Always
    int a[3] = {1,2,3}; // Size 3
    cout<<a[0]<<endl;
    change(a);
    cout<<a[0]<<endl;
    // 2D Array
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0]<<endl;
    change2DArray(arr);
    cout<<arr[0][0]<<endl;

}