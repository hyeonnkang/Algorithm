#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int A, B, C;
    cin >> A >> B >> C;

    string mul = to_string(A * B * C);

    int box[10];
    fill(box, box + 10, 0);

    for (auto c : mul)
    {
        box[c - '0']++;
    }

    for (auto n : box)
    {
        cout << n << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
