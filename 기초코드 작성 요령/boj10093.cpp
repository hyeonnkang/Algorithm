#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unsigned long long A, B;
    cin >> A >> B;

    if (A == B)
    {
        cout << 0 << "\n";
        return;
    }

    // A가 작은 수, B가 큰 수로 설정
    if (A > B)
    {
        unsigned long long tmp = A;
        A = B;
        B = tmp;
    }

    // 두 수 사이의 개수
    cout << B - A - 1 << "\n";

    // 두 수 사이의 정수
    for (unsigned long long i = A + 1; i < B; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}