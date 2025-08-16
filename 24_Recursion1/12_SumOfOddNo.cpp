// Write a program to print the sum of all odd numbers from a to b (inclusive) using Recursion
// Ex - a = 2 , b = 9 --> 3 5 7 9
#include <iostream>
using namespace std;
void sumOfOdd(int x, int n)
{
    if (x > n)
        return;
    if (x % 2 != 0)
        cout << x << " ";
    sumOfOdd(x + 1, n);
}
int main()
{
    int a;
    cout << "Enter a : ";
    cin >> a;
    int b;
    cout << "Enter b : ";
    cin >> b;
    sumOfOdd(a, b);
}