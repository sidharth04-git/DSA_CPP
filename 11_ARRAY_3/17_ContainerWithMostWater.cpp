// We Use Two Pointer Concept
#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>&height)
{
    int n = height.size();
    int i = 0;
    int j = n-1;
    int max_Water = 0;
    while(i<j)
    {
        int length = (j-i);
        int widht = min(height[i],height[j]);
        int water = length*widht;
        max_Water = max(water,max_Water);
        if(height[i]<=height[j])
            i++;
        else
            j--;
    }
    return max_Water;
}

int main()
{
    int n;
    cout<<"Enter Size : "<<endl;
    cin>>n;
    vector<int>height;
    cout<<"Enter Elements : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        height.push_back(q);
    }
    int res = maxArea(height);
    cout<<"Maximum amount of water a container can store = "<<res;
} // [1,8,6,2,5,4,8,3,7]