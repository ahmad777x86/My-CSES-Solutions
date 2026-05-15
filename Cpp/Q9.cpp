#include <iostream>
#include <math.h>

using namespace std;

using L1 = long long;

int main()
{
    L1 n, m = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
        m = (m * 2) % (L1)(1e9 + 7);
    cout << m;
    return 0;
}