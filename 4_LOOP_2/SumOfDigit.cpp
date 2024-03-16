 #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int sum = 0;
    int last_digit;
    while(n>0)
    {
        last_digit = n%10;
        sum = sum + last_digit;
        n/=10;
    }
    cout<<"Sum is "<<sum<<" ";
 }