#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>height;
    cout<<"Enter Elements : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        height.push_back(q);    
    }
    // Make Another Array brr of size same as Array height
    vector<int>brr(n);
    brr[n-1] = -1;  // brr ke last idx me -1
    int max = height[n-1]; // max me height ka last element
    for(int i=n-2; i>=0; i--)
    {
        brr[i] = max;
        if(max<height[i])
            max = height[i];
    }
    // Display
    cout<<"Next Greatest Elements of Array are : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cout<<brr[i]<<" ";
    }


}
