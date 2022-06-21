#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
    }

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += num[i];
    }

    int avg = sum / 5;

    int mid;
    for (int i = 0; i < 5; i++)
    {
        int min = 100;
        int idx = i;
        for (int j = i; j < 5; j++)
        {
            if (num[j] < min)
            {
                min = num[j];
                idx = j;
            }
        }
        num[idx] = num[i];
        num[i] = min;
    }

    mid = num[2];

    cout << avg << "\n"
         << mid << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}