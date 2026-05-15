#include <iostream>

using namespace std;
using l1 = long long;

int main()
{
    l1 n, *a, *b;
    cin >> n;
    a = new l1[n];
    b = new l1[n];
    for (l1 i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    for (l1 i = 0; i < n; i++)
    {
        if ((a[i] + b[i]) % 3 == 0 && a[i] / 2 <= b[i] && b[i] / 2 <= a[i])
        {
            cout << "YES" << endl;
        }
        else if (a[i] == 0 && b[i] == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    delete[] a;
    delete[] b;
    return 0;
}