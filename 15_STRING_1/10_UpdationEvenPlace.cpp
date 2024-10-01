// Replace Even Place Character to a
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String"<<endl;
    getline(cin,str);
    int i = 0;
    while(str[i]!='\0')
    {
        if(i%2==0){
            str[i] = 'a';
        }
        i++;
    }
    cout<<str;


}