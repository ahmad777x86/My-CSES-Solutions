#include <iostream>

using namespace std;

int main()
{
    int n;
    int long long s = 0, max = 0;
    bool flag = false;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > max)
        {
            max = arr[i - 1];
        }
        if (arr[i] < max)
        {
            s += max - arr[i];
        }
    }

    cout << s;
    return 0;
}