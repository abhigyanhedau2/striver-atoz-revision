#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (j <= i)
                cout << j + 1;

            else if (j >= 2 * n - i - 1)
                cout << 2 * n - j;

            else
                cout << " ";
        }

        cout << endl;
    }
}

int main()
{
    printPattern(5);

    return 0;
}