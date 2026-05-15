#include <iostream>

using namespace std;

using l1 = long long;

int main()
{
    l1 n, m = 0;
    cin >> n;
    for (l1 i = 5; i <= n; i *= 5)
        m += n / (l1)i;
    cout << m;
    return 0;
}