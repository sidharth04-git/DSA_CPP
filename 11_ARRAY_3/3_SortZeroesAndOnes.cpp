// Two Pointer Method to sort an array containing only 0s and 1s
 
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v)
{
    int i = 0; // first index
    int j = v.size()-1;  // last index
    while(i<=j)
    {
         if(v[i]==1 && v[j]==0) // Swap code
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        else if(v[i]==0)
            i++;
        else
            j--;
    }
    cout<<endl;
}

void display(vector<int>&v)
{
    for(int i=0; i<=v.size()-1; i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v;
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    cout<<"Enter Array Elements "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    sort(v);
    display(v);
}