#include <iostream>
using namespace std;
void print1toN(int n)
{
    if (n == 0) // Base Condition
        return;
    print1toN(n - 1);  // recursive call
    cout << n << endl; // kaam
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    print1toN(n);
}