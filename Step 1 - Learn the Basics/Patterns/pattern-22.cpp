#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i <= 2 * n - 2; i++)
    {
        for (int j = 0; j <= 2 * n - 2; j++)
        {
            int offset = min({i, j, abs(2 * n - i - 2), abs(2 * n - j - 2)});
            cout << n - offset;
        }

        cout << endl;
    }
}

int main()
{
    printPattern(4);

    return 0;
}