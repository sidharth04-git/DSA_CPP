// N = 5 --> 5 4 3 2 1 2 3 4 5
#include <iostream>
using namespace std;
void sequence(int n)
{
    if(n==0)
        return;
    cout<<n<<" ";
    sequence(n-1);
    cout<<n<<" ";
}
int main()
{
    
    int n;
    cout << "Enter n : ";
    cin >> n;
    sequence(n);
}
