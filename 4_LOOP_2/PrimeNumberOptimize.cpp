#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            cout<<"Not Prime";
            break;
        }
        else{
            cout<<"Prime ";
            break;
        }
    }
}
                 //Time Complexity - O(rootn)