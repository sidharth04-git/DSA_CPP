#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5);
    cout<<"Enter Elements : ";
    for(int i=0; i<5; i++){
        cin>>v[i];
    }
    sort(v.begin() , v.end());
    cout<<"Element After Sorting : "<<endl;
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
}