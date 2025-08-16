// Print Sum from 1 to n using Return Type
#include <iostream>
using namespace std;
int sum1toN(int n)
{
    if (n == 0)
        return 0;
    int ans = n + sum1toN(n - 1);
    return ans;
}
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    cout << sum1toN(n);
}