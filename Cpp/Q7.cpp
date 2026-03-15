#include <iostream>

using namespace std;

#define ll long long int

int main()
{
    int k;
    cin >> k;

    for (ll i = 1; i <= k; i++)
    {
        ll n = (i * i * (i * i - 1)) / 2;
        if (i > 2)
        {
            n -= 4 * (i - 2) * (i - 1);
            cout << n << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}