#include <bits/stdc++.h>
using namespace std;

void printPattern1(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j <= 2 * n - 2; j++)
        {
            // top pyramid from row 0 to 4
            if (i < n)
            {
                if (j >= n - i - 1 && j <= n + i - 1)
                    cout << "*";

                else
                    cout << " ";
            }

            // bottom pyramid from row 5 to 9
            else
            {
                if (j >= i - n && j <= 3 * n - (i + 2))
                    cout << "*";

                else
                    cout << " ";
            }
        }

        cout << endl;
    }
}

// Simply combined the if conditionals
void printPattern2(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j <= 2 * n - 2; j++)
        {
            if ((i < n && j >= n - i - 1 && j <= n + i - 1) || (i >= n && j >= i - n && j <= 3 * n - (i + 2)))
                cout << "*";

            else
                cout << " ";
        }

        cout << endl;
    }
}

int main()
{
    printPattern1(5);
    printPattern2(5);

    return 0;
}