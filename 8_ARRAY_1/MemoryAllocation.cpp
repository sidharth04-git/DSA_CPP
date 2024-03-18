#include<iostream>
using namespace std;
int main()
{
    int arr[4];
    cout<<arr<<endl; // Array ke phele element ka phele byte ka address dega
    cout<<&arr<<endl; //Array ke phele element ka phele byte ka address dega
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    // 0x3485ff6b0
    // 0x3485ff6b0
    // 0x3485ff6b0
    // 0x3485ff6b4
    // 0x3485ff6b8
    // 0x3485ff6bc
}