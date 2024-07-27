//       *
//     * * *
//   * * * * *
// * * * * * * *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        // SPACES
        for(int j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }
        // ODD STAR
        for(int k=1; k<=2*i-1; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    } 
}