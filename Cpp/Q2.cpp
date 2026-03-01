#include <iostream>

using namespace std;

int main()
{
    int long long n, s = 0;
    cin >> n;
    int *arr = new int[n - 1];

    int long long missing_number = 0;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        s += arr[i];
    }
    missing_number = n * (n + 1) / 2 - s;
    cout << missing_number;
    return 0;
}