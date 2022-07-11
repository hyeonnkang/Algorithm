#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

#define MX 501

int board[MX][MX];       // 0은 색칠이 안된 부분,    1은 색칠이 된 부분
int visit[MX][MX] = {0}; // 방문여부를 표시.  1은 방문한거,   0은 방문하지 않은 거

// 정점의 상하좌우를 탐색하기 위한 배열
int dir_X[] = {0, 1, 0, -1};
int dir_Y[] = {1, 0, -1, 0};

int pictures = 0; // 그림의 개수
int max_area = 0; // 가장 넓은 그림의 넓이

void solve()
{
    int n, m; // n : 세로크기     m : 가로크기
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }
    }

    queue<pair<int, int>> Q; // BFS를 수행할 큐

    bool con = true; // false이면 while 문을 종료한 후 결과물을 출력
    while (con)
    {
        con = false;

        // 새로운 그림의 위치 찾기
        // 가장 처음으로 board값이 1인 곳을 찾는다.

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] == 1 && visit[i][j] == 0)
                {

                    con = true; // 새로운 그림이 존재할 경우
                    pictures++;
                    visit[i][j] = 1;         // 방문표시
                    Q.push(make_pair(i, j)); // 시작점 큐에 넣기
                    cout << "(" << i << ", " << j << ") start new picture \t (pictures) = " << pictures << "\n";
                    break;
                }
            }
        }
        if (!con)
            break; // 색칠된 모든 원소를 방문했을 경우 while 탈출

        int cur_area = 0; // 현재 그림의 넓이 (시작점만 있는 상태이므로 넓이가 1로 시작)

        while (!Q.empty())
        {
            pair<int, int> cur = Q.front();
            cur_area++;
            Q.pop();

            // 현재 위치를 기준으로 상하좌우를 확인한다.
            for (int i = 0; i < 4; i++)
            {
                int tmp_X = cur.X + dir_X[i];
                int tmp_Y = cur.Y + dir_Y[i];

                // (tmp_X, tmp_Y) 가 범위를 벗어나는지 체크
                if (tmp_X < 0 || tmp_X >= n || tmp_Y < 0 || tmp_Y >= m)
                    continue;
                // 색칠이 된 부분인지 체크
                if (board[tmp_X][tmp_Y] == 0)
                    continue;
                // 이미 방문한 것인지 체크
                if (visit[tmp_X][tmp_Y] == 1)
                    continue;

                // (tmp_X, tmp_Y)를 방문
                visit[tmp_X][tmp_Y] = 1;
                Q.push(make_pair(tmp_X, tmp_Y));
                cout << "(" << tmp_X << ", " << tmp_Y << ") visited \t current picture area = " << cur_area << "\n";
            }
        }

        if (cur_area > max_area)
            max_area = cur_area;
    }

    cout << pictures << "\n"
         << max_area;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}