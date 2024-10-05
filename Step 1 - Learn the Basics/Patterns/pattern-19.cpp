#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (i < n)
            {
                if (j <= n - i - 1 || j >= n + i)
                    cout << "*";

                else
                    cout << " ";
            }

            else
            {
                if (j <= (i - n) || j >= 2 * n - (i - n) - 1)
                    cout << "*";

                else
                    cout << " ";
            }
        }

        cout << endl;
    }
}

int main()
{
    printPattern(5);

    return 0;
}