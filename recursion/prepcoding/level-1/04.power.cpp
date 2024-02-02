#include <iostream>
using namespace std;

int power(int x, int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    int ans = power(x, n - 1);
    int sol = x * ans;
    return sol;
}
int main()
{
    cout << power(2, 0);
    return 0;
}