// Normal Iterative Solution for a raise to the power b
#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (a == 0)
        return 0;
    if (a == 0 && b == 0)
    {
        cout << "Not Define";
        return -100;
    }
    int p = 1;
    for (int i = 1; i <= b; i++)
    {
        p = p * a;
    }
    return p;
}
int main()
{
    int a, b;
    cout << "Enter Base : ";
    cin >> a;
    cout << "Enter Power : ";
    cin >> b;
    cout << power(a, b);
}