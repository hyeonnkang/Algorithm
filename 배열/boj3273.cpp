#include <bits/stdc++.h>
using namespace std;

#define SUM 1000000

// 1 ~ 1000000 값을 저장해놓은 배열
int k[SUM + 1] = {0};

void solve()
{
    int n; // 수열의 크기
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        k[a[i]]++; // 값 a[i]가 등장했다고 저장
    }

    int x;
    cin >> x;

    int cnt = 0; // a[i], a[j] 쌍의 개수
    for (int i = 0; i < n; i++)
    {
        int y = x - a[i];

        // y가 1000000보다 작거나 같고 이 값이 배열 a안에 존재할 경우
        if (y <= SUM && y >= 0)
        {
            if (k[y] >= 1)
            {
                cnt += k[y];
            }
        }
    }

    cout << cnt / 2;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
