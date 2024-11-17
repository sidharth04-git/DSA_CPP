// Time Complexity - O(N)
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,6,7,9,13,16,18};
    int n = 11;
    for(int i=0; i<n; i++){
        if(i!=arr[i]){
            cout<<i;
            break;
        }
    }
}