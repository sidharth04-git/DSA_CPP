#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices){
    int n = prices.size();
    if(n==0 || n==1)
        return 0;

    vector<int>bestBuy(n);

    bestBuy[0] = prices[0];

    for(int i=1; i<n; i++){
        bestBuy[i] = min(bestBuy[i-1] , prices[i-1]);
    }

    int maxProfit = 0;

    for(int i=0; i<n; i++){
        int currentProfit = prices[i] - bestBuy[i];
        maxProfit = max(currentProfit , maxProfit);
    }

    return maxProfit;

}

int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    vector<int>prices(n);
    cout<<"Enter Prices : ";
    for(int i=0; i<n; i++){
        cin>>prices[i];
    }
    cout<<"Maximum Profit is : "<<maxProfit(prices);
}