#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    int lastCharInt = 65 + n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << (char)(lastCharInt - (i - j));

        cout << endl;
    }
}

int main()
{
    printPattern(5);

    return 0;
}