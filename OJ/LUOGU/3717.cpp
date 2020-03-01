#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;

bool visited[110][110] = {{0}};
double dis;
inline int _max(int a,int b){
    return (a>b?a:b);
}
inline int _min(int a,int b){
    return (a<b?a:b);
}

int main() {
    ios::sync_with_stdio(false);
    // freopen("E:\\VS-Code-C\\CODES\\test_in.txt", "r", stdin); //输入重定向
    int n,m,r;
    int x;
    int y;

    int num = 0;

    cin >> n >> m >> r;
    for (int i = 1; i <= m; ++i){
        cin >> x >> y;
        x -= 1;
        y -= 1;
        visited[x][y] = 1;
        for (int j = _max(0, x-r-1); j < _min(n, x+r+1); ++j) {
            for (int k = _max(0, y-r-1); k < _min(n, y+r+1); ++k) {
                dis = sqrt((x - j) * (x - j) + (y - k) * (y - k));
                if (dis<=r) {
                    visited[j][k] = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (visited[i][j]) {
                num++;
                // printf("%d,%d\t", i, j);
            }
        }
    }
    // fclose(stdin);//关闭重定向输入

    cout << num;

    return 0;
}
