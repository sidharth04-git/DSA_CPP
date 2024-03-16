#include<iostream>
using namespace std;
void china()
{
    cout<<"Hello From China "<<endl;
}
void pakistan()
{
    cout<<"Hello From Pakistan "<<endl;
    china();
}
void india()
{
    cout<<"Namaste i am from India "<<endl;
    pakistan();
}
int main()
{
    cout<<"Hello "<<endl;
    india();
}