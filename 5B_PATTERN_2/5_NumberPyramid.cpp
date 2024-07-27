// Using nsp and nst variable 
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int nsp = n-1;
    int nst = 1;
    for(int i=1; i<=n; i++)
    {
        // Spaces
        for(int j=1; j<=nsp; j++)
        {
            cout<<"  ";
        }
        nsp--;
        // Star
        for(int k=1; k<=nst; k++)
        {
            cout<<k<<" ";
        }
        nst+=2;
        cout<<endl;
    }
}