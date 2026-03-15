#include <iostream>

using namespace std;

int main()
{
    int long long t;
    int long long *y, *x;
    int long long result, seq, max;

    cin >> t;
    y = new int long long[t];
    x = new int long long[t];

    for (int i = 0; i < t; i++)
    {
        cin >> y[i] >> x[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (y[i] > x[i])
        {
            max = y[i];
        }
        else
        {
            max = x[i];
        }
        seq = max * max - (max - 1);
        if (max == y[i])
        {
            result = max % 2 == 0 ? seq + (max - x[i]) : seq - (max - x[i]);
        }
        else
        {
            result = max % 2 == 0 ? seq - (max - y[i]) : seq + (max - y[i]);
        }
        cout << result << endl;
    }
    return 0;
}