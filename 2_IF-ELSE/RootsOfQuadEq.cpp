#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1,x2,a,b,c;
    float realPart,imaginaryPart,discrimant;
    cout<<"Enter Co-efficient of a , b and c : "<<endl;
    cin>>a>>b>>c;
    discrimant = (b*b-4*a*c); 
    if(discrimant>0)
    {
        x1 = (-b+sqrt(discrimant))/(2*a);
        x2 = (-b-sqrt(discrimant))/(2*a);
        cout<<"The Roots are Real and Distinct "<<endl;
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
    else if(discrimant=0)
    {
        x1 = -b/(2*a);
        cout<<"The Roots are Real and Equal "<<endl;
        cout<<"x1 = x2 = "<<x1<<endl;
    }
    else
    {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discrimant)/2*a;
        cout<<"The Roots are complex and distinct "<<endl;
        cout<<"x1 = "<<realPart<<"+"<<imaginaryPart<<endl;
        cout<<"x2 = "<<realPart<<"-"<<imaginaryPart<<endl;
    }
}
