#include<iostream>
#include<vector>
using namespace std;
void reversePart(int i , int j , vector<int>&v)
{
    while(i<=j)  // conditon for swap
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
}

void display(vector<int>&a)
{
    for(int i=0; i<=a.size()-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v;
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    int k;
    cout<<"How many times you want to rotate the array : ";
    cin>>k;
    k = k%n;
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
}






