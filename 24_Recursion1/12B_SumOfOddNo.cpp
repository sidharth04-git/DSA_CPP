#include <iostream>
using namespace std;
void sumOfOdd(int x, int n)
{
    if (x > n)
        return;
    if (x % 2 != 0)
        cout << x << " ";
    sumOfOdd(x + 2, n);
}
int main()
{
    int a;
    cout << "Enter a : ";
    cin >> a;
    int b;
    cout << "Enter b : ";
    cin >> b;
    if (a % 2 == 0)
        a++;
    sumOfOdd(a, b);
}