#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> Factorial(int N){
    vector<int>ans(1,1);
    while(N>1){
        int carry = 0 , res , size = ans.size();
        for(int i=0; i<size; i++){
            res = ans[i]*N+carry;
            ans[i] = res%10;
            carry = res/10;

        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10; 
        }
        N--;

    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int N;
    cout<<"Enter Number : ";
    cin>>N;
    vector<int>ans = Factorial(N);
    for(int i=0; i<=ans.size()-1; i++){
        cout<<ans[i];
    }
    
}