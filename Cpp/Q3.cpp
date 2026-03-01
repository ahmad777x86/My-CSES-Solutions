#include <iostream>

using namespace std;

int main()
{
    char temp;
    int n = 1, max = 0;
    string seq;
    cin >> seq;
    for (int i = 0; i < seq.length(); i++)
    {
        if (temp == seq[i])
        {
            n++;
        }
        else
        {
            temp = seq[i];
            n = 1;
        }
        if (n > max)
        {
            max = n;
        }
    }
    cout << max;
    return 0;
}