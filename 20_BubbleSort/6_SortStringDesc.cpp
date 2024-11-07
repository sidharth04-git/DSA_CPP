#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    string str;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }

    // sort(str.begin() , str.end());

    // Sort using Bubble Sort

    int n = str.length();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(str[j]>str[j+1]){
                swap(str[j] , str[j+1]);
            }
        }
    }
    cout<<str;
}