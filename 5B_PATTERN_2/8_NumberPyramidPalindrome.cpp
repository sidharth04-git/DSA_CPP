//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)  // For Spaces
        {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++)  // For Normal Numbers
        {
            cout<<k<<" ";
        }
        for(int q=i-1; q>=1; q--)
        {
            cout<<q<<" ";
        }
        cout<<endl;
    }
}