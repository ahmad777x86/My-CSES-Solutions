#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int n, c = 1;
    cin >> n;
    if (n * (n + 1) / 2 % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
    vector<int> v1, v2;

    if (n % 4)
    {
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);
    }

    if (n > 3)
    {
        int j;
        if (n % 2 == 0)
            j = 0;
        else
            j = 3;

        for (int i = 0; i <= (n - 4) / 4; i++)
        {
            v1.push_back(4 * i + j + 1);
            v1.push_back(4 * i + j + 4);
            v2.push_back(4 * i + j + 2);
            v2.push_back(4 * i + j + 3);
        }
    }
    cout << v1.size() << endl;
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << v2.size() << endl;
    for (int i : v2)
    {
        cout << i << " ";
    }
}
