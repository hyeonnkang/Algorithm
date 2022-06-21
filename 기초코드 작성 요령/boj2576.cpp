#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int num[7];
    for (int i = 0; i < 7; i++)
        cin >> num[i];

    int min = 100;
    int sum = 0;

    bool exist = false;
    for (int i = 0; i < 7; i++)
    {
        if (num[i] % 2)
        {
            exist = true;
            if (min > num[i])
                min = num[i];
            sum += num[i];
        }
    }
    if (exist)
        cout << sum << "\n"
             << min << "\n";
    else
    {
        cout << -1;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}