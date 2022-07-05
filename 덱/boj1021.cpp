#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, M;
    cin >> N >> M;

    deque<int> de;
    for (int i = 1; i <= N; i++)
    {
        de.push_back(i);
    }

    int sum = 0; // 2, 3번 연산의 횟수

    for (int i = 0; i < M; i++)
    {
        int m;
        cin >> m;

        // m 카드가 맨 앞에 있을 경우
        if (de.front() == m)
        {
            N--;
            de.pop_front();
            continue;
        }

        // m 카드가 맨 앞의 카드가 아닐 경우
        // 현재 덱에서 m이 있는 위치를 찾는다.
        int pos = -1;
        for (int i = 0; i < N; i++)
        {
            if (de[i] == m)
            {
                pos = i;
                break;
            }
        }

        while (de.front() != m)
        {
            if (pos <= N / 2)
            {
                // 앞으로 이동
                de.push_back(de.front());
                de.pop_front();
            }
            else
            {
                // 뒤로 이동
                de.push_front(de.back());
                de.pop_back();
            }

            sum++;
        }

        de.pop_front();
        N--;
    }

    cout << sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}