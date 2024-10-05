#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i <= 2 * n - 2; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (i < n)
            {
                if (j <= i || j >= 2 * n - i - 1)
                    cout << "*";

                else
                    cout << " ";
            }

            else
            {
                if (j <= (n - (i - n) - 2) || j >= (n + (i - n) + 1))
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