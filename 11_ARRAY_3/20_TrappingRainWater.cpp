#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>&height)
{
    int n = height.size();

    // 1. Previous Greatest Elements of Array
    
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for(int i=1; i<=n-1; i++)
    {
        prev[i] = max;
        if(max<height[i])
            max = height[i];
    }

    // 2. Next Greater Elements of Array

    int next[n];
    next[n-1] = -1;
    max = height[n-1];
    for(int i=n-2; i>=0; i--)
    {
        next[i] = max;
        if(max<height[i])
            max = height[i];
    }
    
    // 3. Minimum Array (finding smallest elements form prev and next Array)

    int mini[n];
    for(int i=0; i<=n-1; i++)
    {
        mini[i] = min(prev[i],next[i]);
    }

    // 4. Calculating Water

    int water = 0;
    for(int i=1; i<=n-2; i++)
    {
        if(height[i]<mini[i])
        {
            water+=mini[i]-height[i];
        }
    }
    return water;
}

int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>height;
    cout<<"Enter Heights : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        height.push_back(q);
    }
    int res = trap(height);
    cout<<res<<" units of rain water are being trapped";
}




