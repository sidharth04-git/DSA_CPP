#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>arr;
    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    int target;
    cout<<"Enter Target : ";
    cin>>target;

    // Finding Last occurence of Target Element 
    bool flag = false;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            if(mid==n-1){
                cout<<mid;
                flag = true;
                break;
            }
            else if(arr[mid+1]!=target){
                cout<<mid;
                flag = true;
                break;
            }
            else // arr[mid+1] == target
                low = mid + 1;
        }
        else if(arr[mid]<target)
            low = mid + 1;
        else    
            high = mid - 1;
    }
    if(flag==false)
        cout<<-1;
}