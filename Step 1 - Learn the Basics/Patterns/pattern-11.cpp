#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "1";

            else
                cout << "0";
        }

        cout << endl;
    }
}

int main()
{
    printPattern(5);

    return 0;
}