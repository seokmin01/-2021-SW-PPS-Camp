/*
(sr, sc) 좌표에 있는 색상을 oldColor에 저장한다.
(sr, sc) 좌표부터 BFS를 시작한다.
    이미 탐색 했거나 (nx, ny)의 색상이 oldColor가 아니면 넘어간다.
    아니라면, 
        방문했다는 표시를 한다.
        (nx, ny)의 색상을 newColor로 바꾼다.
image를 반환한다.
*/

class Solution {
public:
    int vis[50][50];
    int n, m;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        n = image.size(), m = image[0].size();
        queue<pair<int, int> > Q;
        vis[sr][sc] = 1;
        int oldColor = image[sr][sc];
        image[sr][sc] = newColor;
        Q.push({sr, sc});
        while (!Q.empty()) {
            pair<int, int> cur = Q.front();
            Q.pop();
            for (int dir = 0; dir < 4; dir++) {
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                    continue;
                if (vis[nx][ny] || image[nx][ny] != oldColor)
                    continue;
                vis[nx][ny] = 1;
                image[nx][ny] = newColor;
                Q.push({nx, ny});
            }
        }
        return image;
    }
};