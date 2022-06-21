#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int num[21]; // 1부터 20까지 숫자가 적혀있는 카드 배열
    for (int i = 0; i < 21; i++)
    {
        num[i] = i;
    }

    int position[10][2];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> position[i][j];
        }
    }

    // 10번 반복
    for (int i = 0; i < 10; i++)
    {
        int a = position[i][0];
        int b = position[i][1];

        // a-b 구간 카드 역순으로 뒤집기
        while (a < b)
        {
            int tmp = num[a];
            num[a] = num[b];
            num[b] = tmp;

            a++;
            b--;
        }
    }

    // 카드 출력
    for (int i = 1; i < 21; i++)
    {
        cout << num[i] << " ";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}