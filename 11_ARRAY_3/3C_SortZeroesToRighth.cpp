// Using extra Array temp
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v)
{
    for(int i=0; i<=v.size()-1; i++)
    {
        cout<<v.at(i)<<" ";
    }
}

void moveZeroes(vector<int>&v)
{
    int n = v.size();
    vector<int>temp; // Ek temp Vector jisme change krege
    int noz = 0;
    // Push Back Non Zero number and count zeroes 
    for(int i=0; i<=n-1; i++)
    {
        if(v[i]!=0)
            temp.push_back(v[i]);
        else
            noz++;
    }
    // Push Back all the zeroes in the left 
    for(int i=0; i<=noz-1; i++)
    {
        temp.push_back(0);
    }
    // Copy the elements of Temp into v vector
    for(int i=0; i<=n-1; i++)
    {
        v[i] = temp[i];
    }
    display(v);
}

int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter Array Elements : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    moveZeroes(v);
}



