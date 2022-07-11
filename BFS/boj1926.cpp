#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

#define MX 501

int board[MX][MX];       // 0�� ��ĥ�� �ȵ� �κ�,    1�� ��ĥ�� �� �κ�
int visit[MX][MX] = {0}; // �湮���θ� ǥ��.  1�� �湮�Ѱ�,   0�� �湮���� ���� ��

// ������ �����¿츦 Ž���ϱ� ���� �迭
int dir_X[] = {0, 1, 0, -1};
int dir_Y[] = {1, 0, -1, 0};

int pictures = 0; // �׸��� ����
int max_area = 0; // ���� ���� �׸��� ����

void solve()
{
    int n, m; // n : ����ũ��     m : ����ũ��
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }
    }

    queue<pair<int, int>> Q; // BFS�� ������ ť

    bool con = true; // false�̸� while ���� ������ �� ������� ���
    while (con)
    {
        con = false;

        // ���ο� �׸��� ��ġ ã��
        // ���� ó������ board���� 1�� ���� ã�´�.

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] == 1 && visit[i][j] == 0)
                {

                    con = true; // ���ο� �׸��� ������ ���
                    pictures++;
                    visit[i][j] = 1;         // �湮ǥ��
                    Q.push(make_pair(i, j)); // ������ ť�� �ֱ�
                    cout << "(" << i << ", " << j << ") start new picture \t (pictures) = " << pictures << "\n";
                    break;
                }
            }
        }
        if (!con)
            break; // ��ĥ�� ��� ���Ҹ� �湮���� ��� while Ż��

        int cur_area = 0; // ���� �׸��� ���� (�������� �ִ� �����̹Ƿ� ���̰� 1�� ����)

        while (!Q.empty())
        {
            pair<int, int> cur = Q.front();
            cur_area++;
            Q.pop();

            // ���� ��ġ�� �������� �����¿츦 Ȯ���Ѵ�.
            for (int i = 0; i < 4; i++)
            {
                int tmp_X = cur.X + dir_X[i];
                int tmp_Y = cur.Y + dir_Y[i];

                // (tmp_X, tmp_Y) �� ������ ������� üũ
                if (tmp_X < 0 || tmp_X >= n || tmp_Y < 0 || tmp_Y >= m)
                    continue;
                // ��ĥ�� �� �κ����� üũ
                if (board[tmp_X][tmp_Y] == 0)
                    continue;
                // �̹� �湮�� ������ üũ
                if (visit[tmp_X][tmp_Y] == 1)
                    continue;

                // (tmp_X, tmp_Y)�� �湮
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