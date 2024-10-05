#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i <= 2 * n - 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < n)
            {
                if (j <= i)
                    cout << "*";

                else
                    cout << " ";
            }

            else
            {
                if (j <= 2 * n - i - 2)
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