#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int a = n;
    int last_digit = a%10;
    while(n>9)
    {
        n = n/10;
    }
    cout<<"Last Digit is "<<last_digit<<endl;
    cout<<"First Digit is "<<n<<endl;
}


