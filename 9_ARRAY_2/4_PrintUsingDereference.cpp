// Pointer ke through array ki value ko access ya print ya update kr skte hai
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {7,4,5,1,0,3,9};
    int* ptr = arr;  // ptr ko arr ki access mil gyi
    for(int i=0; i<=6; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; // wapas me ptr me address of 1st element aa gaya

}

