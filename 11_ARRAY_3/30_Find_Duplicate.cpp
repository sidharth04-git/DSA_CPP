#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr){
    int n = arr.size();
    int ans = 0;
    
    // XOR All Element

    for(int i=0; i<n; i++){
        ans^=arr[i];
    }
    // XOR 1 to n-1

    for(int i=1; i<n; i++){
        ans^=i;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int ans = findDuplicate(v);
    cout<<ans;

}