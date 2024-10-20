#include<iostream>
using namespace std;
int isPrime(int N){
    if(N<=1)
        return 0;

    else if(N==2)
        return 1; // 2 is only even prime number

    else if(N%2==0)
        return 0; // any other even number is not prime
    
    for(int i=3; i*i<=N; i+=3){
        if(N%i==0){
            return 0;  // Not Prime
        }
    }
    return 1;  // Prime Hai
}
int main()
{
    int n;
    cout<<"Enter a Number n : ";
    cin>>n;
    cout<<isPrime(n);
}