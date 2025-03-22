#include <bits/stdc++.h>
using namespace std;

int main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> ans(n);
    ans[n/2] = 1;
    ans[0] = 2;
    if (n >= 3) ans[n-1] = 3;
    int j = 4;
    for (int i = 0; i < n; i++) {
      if (!ans[i]) ans[i] = j++;
    }
    if (n == 1) ans[0] = 1;
    for (int x: ans) cout << x << ' ';
    cout << '\n';
  }
}
