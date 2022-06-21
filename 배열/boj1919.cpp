#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    int A[26] = {0};
    int B[26] = {0};
    for (auto c : a)
        A[c - 'a']++;
    for (auto c : b)
        B[c - 'a']++;

    int r = 0;

    for (int i = 0; i < 26; i++)
    {
        // x : A[i]와 B[i]의 차
        int x = A[i] - B[i];
        x = x >= 0 ? x : (-1) * x;

        // x가 0이면 a, b에 존재하는 알파벳의 개수가 똑같은 것이다.
        if (x != 0)
        {
            r += x;
        }
    }

    cout << r;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
