// Vector Input When Size is given at the time of declaration of vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5);
    cout<<"Give Vector Output : ";
    // take input same as array 
    for(int i=0; i<5; i++)
    {
        cin>>v[i];
    }
    // take output same as array
    for(int i=0; i<5; i++)
    {
        cout<<v[i]<<" ";
    }

}