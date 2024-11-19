#include<bits/stdc++.h>
using namespace std;
bool isPerfect(long long n){
    int low = 0 , high = n; 
    while(low<=high){
        long long mid = low + (high - low)/2;
        if(mid*mid==n)
            return true;
        else if(mid*mid<n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}
int main(){
    long long x;
    cout<<"Enter Number ";
    cin>>x;
    cout<<isPerfect(x);
}