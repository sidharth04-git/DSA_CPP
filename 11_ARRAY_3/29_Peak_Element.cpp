#include<iostream>
#include<vector>
using namespace std;
int findPeak(vector<int>&arr){
    int n = arr.size();
    if(n==1)
        return 0;

    if(arr[0]>=arr[1])
        return 0;

    if(arr[n-1]>=arr[n-2])
        return n-1;
    
    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            return i;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int ans = findPeak(v);
    if(ans != -1)
        cout << "Peak Element is at index: " << ans << endl;
    else
        cout << "No Peak Element found." << endl;
}