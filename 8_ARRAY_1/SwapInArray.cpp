#include<iostream>
using namespace std;
int main()
{
    int sum[26],temp;
    sum[0] = 100;
    sum[25] = 200;
    temp = sum[25];
    sum[25] = sum[0];
    sum[0] = temp;
    cout<<endl<<sum[0]<<" "<<sum[25];
}