#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>&v)
{
    int n = v.size();  // Store Size of v vector
    // 1. Find Pivot Index idx
    int idx = -1;
    for(int i=(n-2); i>=0; i--)  // check from second last idx to 0th idx
    {
        if(v[i]<v[i+1])
        {
            idx = i;  // Pivot 
            break;
        }
    }
    // 2. Check Array has next Permutation or not
    if(idx==-1)
    {
        reverse(v.begin() , v.end());
        return;  // Function khtm kr dega
    }

    // 3. Sort/Reverse Array From Idx + 1 to End

    reverse(v.begin() + idx+1 , v.begin()+n-1+1); // ek 1 extra add krege

    // 4. Find just largest element than idx means idx+1 to end

    int j = -1; 
    for(int i=idx+1; i<=n-1; i++)
    {
        if(v[i]>v[idx])
        {
            j = i;
            break;
        }
    }

    // 5. Swap Pivot And j

    int temp = v[idx];
    v[idx] = v[j];
    v[j] = temp;

    // Print / Display The Next Permutation
    cout << "Next Permutation: ";
    for(int i=0; i<=n-1; i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);  
    }
    nextPermutation(v);
}