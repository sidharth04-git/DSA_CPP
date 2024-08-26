#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[][3] = {1,2,5,6,4,7,8,9,};
    // rows--> 3     0 to 2
    // column --> 3  0 to 2
    cout<<arr2[1][0];

}