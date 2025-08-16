// Example - n = 5 -->  [1 2 3 4 5 4 3 2 1]
#include <iostream>
using namespace std;
void sequence(int x, int n)
{
    if (x >= n)
    {
        cout << n << " ";
        return;
    }
    cout << x << " ";
    sequence(x + 1, n);
    cout << x << " ";
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    sequence(1, n);  // parameterized
}
