// Vector are pass by value each time you pass a new vector is created

#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>a) // a --> 7 4 6 1
{
    a.at(1) = 0;  // a --> 7 100 6 1
    // Print a vector
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";  
    }
    cout<<endl;

}
int main()
{
    vector<int>v;
    v.push_back(7);
    v.push_back(4);
    v.push_back(6);
    v.push_back(1);
    // Print the vector using for loop
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    change(v); // Pass by Value

    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }



}