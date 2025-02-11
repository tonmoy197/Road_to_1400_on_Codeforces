#include <bits/stdc++.h>
using namespace std;

int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n, m;
    string s;
    cin >> n >> m >> s;
    vector<vector<int64_t>> a(n, vector<int64_t>(m));
    vector<int64_t> rows(n), cols(m);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
        rows[i] += a[i][j];
        cols[j] += a[i][j];
      }
    }
    int x = 0, y = 0;
    for (char c: s) {
      if (c == 'D') {
        a[x][y] = -rows[x];
        rows[x] += a[x][y];
        cols[y] += a[x][y];
        x++;
      }
      else {
        a[x][y] = -cols[y];
        rows[x] += a[x][y];
        cols[y] += a[x][y];
        y++;
      }
    }

    assert(x == n - 1 && y == m - 1);
    a[x][y] = -rows[x];

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cout << a[i][j] << " \n"[j == m - 1];
      }
    }
  }
}
