#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }

        cout << endl;
    }
}

int main()
{
    printPattern(5);

    return 0;
}