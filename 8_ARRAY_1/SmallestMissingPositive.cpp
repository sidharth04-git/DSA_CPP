#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i]!=i+1)
        {
            cout<<i+1;
            flag = true;
            break;
        }
    }
    if(flag==false)
        cout<<"There is no missing element ";

}