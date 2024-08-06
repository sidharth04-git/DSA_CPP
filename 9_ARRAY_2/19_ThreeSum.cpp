//Triplet Sum in Array (3sum)
#include<iostream>
using namespace std;
void threeSum(int arr[] , int n, int target)
{
    for(int i=0; i<=n-3; i++)
    {
        for(int j=i+1; j<=n-2; j++)
        {
            for(int k=j+1; k<=n-1; k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                    cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target element : ";
    cin>>target;
    threeSum(arr,n,target);

}
