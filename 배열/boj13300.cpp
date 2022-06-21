#include <bits/stdc++.h>
using namespace std;

struct child
{
    int S; // 성별 (남자:1, 여자:0)
    int Y; // 학년 (1 이상 6 이하)
};

void solve()
{
    int N, K; // N : 학생 수          K : 방의 최대 인원 수
    cin >> N >> K;

    struct child Students[N];
    for (int i = 0; i < N; i++)
    {
        cin >> Students[i].S >> Students[i].Y;
    }

    // 1학년 여학생의 수 = P[1][0];
    // 2학년 남학생의 수 = P[2][1];
    int P[7][2];
    for (int i = 0; i < 7; i++)
        fill(P[i], P[i] + 2, 0);

    for (int i = 0; i < N; i++)
    {
        P[Students[i].Y][Students[i].S]++;
    }

    int room = 0; // 필요한 방의 개수
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int p = P[i][j];
            if (p % K) // 나누어떨어지지 않을 경우
            {
                room += p / K + 1;
            }
            else // 나누어떨어질 경우
            {
                room += p / K;
            }
        }
    }

    cout << room;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}
