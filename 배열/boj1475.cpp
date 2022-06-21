#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string N;
    cin >> N;

    int num[10];
    fill(num, num + 10, 0);

    for (auto n : N)
    {
        num[n - '0']++;
    }

    int max = -1;
    for (int i = 0; i < 10; i++)
    {
        if (i == 6 || i == 9)
            continue;

        int x = num[i];
        if (max < x)
            max = x;
    }

    // 6과 9의 개수를 확인
    int sum = num[6] + num[9];
    if (sum % 2)
    { // 홀수 일 경우
        int x = sum / 2 + 1;
        if (max < x)
            max = x;
    }
    else
    { // 짝수일 경우
        int x = sum / 2;
        if (max < x)
            max = x;
    }
    cout << max;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
