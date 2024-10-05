#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 2 * n - 2; j++)
        {
            if (j >= n - i - 1 && j <= n + i - 1)
                cout << "*";

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