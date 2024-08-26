// using Extra Array called res
#include<iostream>
using namespace std;
int main()
{
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[2][3] = {7,8,9,10,11,12};
    int res[2][3];
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=2; j++)
        {
            res[i][j] = a[i][j] + b[i][j];
        }
    }
    // DISPLAY
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=2; j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}