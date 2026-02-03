#include <iostream>
#include <queue>

using namespace std;

void BFS(int x, int y);

string arr[101];
int vi[101][101] = { 0, };
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int N, M;

bool inRange(int y, int x) {
    if (y >= 0 && y < N && x >= 0 && x < M) {
        return true;
    }
    return false;
}

void BFS(int y, int x) {
   
    queue<pair<int, int>> q;
    q.push(make_pair(y, x));
    vi[y][x] = 1;

    while (!q.empty()) {
        x = q.front().second;
        y = q.front().first;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nextX = x + dx[i];
            int nextY = y + dy[i];
            if (inRange(nextY, nextX)) {
                if (vi[nextY][nextX] == 0 && arr[nextY][nextX] == '1') {
                    q.push(make_pair(nextY, nextX));
                    vi[nextY][nextX] = vi[y][x] + 1;
                }
            }
        }
    }
}
int main() {
    
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    BFS(0, 0);

    cout << vi[N - 1][M - 1] << endl;
}