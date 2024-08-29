#include<iostream>
using namespace std;
int main()
{
    int m,n,p,q;
    cout<<"Enter Row of 1st Matrix : ";
    cin>>m;
    cout<<"Enter Column of 1st Matrix : ";
    cin>>n;
    cout<<"Enter Row of 2nd Matrix : ";
    cin>>p;
    cout<<"Enter Column of 2nd Matrix : ";
    cin>>q;
    if(n==p)
    {
        int a[m][n];  // M1
        cout<<"Enter Elements in 1st Matrix ";
        for(int i=0; i<=m-1; i++)
        {
            for(int j=0; j<=n-1; j++)
            {
                cin>>a[i][j];
            }
        }
        int b[p][q]; // M2
        cout<<"Enter Elements in 2nd Matrix ";
        for(int i=0; i<=p-1; i++)
        {
            for(int j=0; j<=q-1; j++)
            {
                cin>>b[i][j];
            }
        }

        // Resultant matrix

        int res[m][q];

        for(int i=0; i<=m-1; i++)
        {
            for(int j=0; j<=q-1; j++)
            {
                res[i][j] = 0;  // har baar update hoga value iss array me
                for(int k=0; k<=p-1; k++)
                {
                    res[i][j]+= a[i][k]*b[k][j];
                }
            }
        }

        cout<<endl;

        // Display

        for(int i=0; i<=m-1; i++)
        {
            for(int j=0; j<=q-1; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    else // n!=p
    {
        cout<<"Matrix Multiplication is Not Possible ";
    }
}