#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    int mx = INT_MIN;
    int smx = INT_MIN;
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i]>mx)
        {
            smx = mx;
            mx = arr[i];
        }
        else
        {
            smx = max(smx,arr[i]);
        }
    }
    cout<<mx<<endl;
    if(smx==INT_MIN)
        cout<<"No Second Maximum Exist : ";
    else
        cout<<smx;

}