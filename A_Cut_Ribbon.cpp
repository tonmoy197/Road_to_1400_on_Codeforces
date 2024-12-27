#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> dp;

int maxPiece(int n, int a, int b, int c){
    if(n == 0) return 0;
    if(n < 0) return - 1e9;
    if(dp[n] != -1) return dp[n];
    dp[n] = 1 + max(maxPiece(n-a, a, b, c), max(maxPiece(n-b, a, b, c), maxPiece(n-c, a, b, c)) );
    return dp[n];

}


int main()
{
    int n, a, b, c; cin >> n >> a >> b >> c;
     dp.resize(n + 1, -1); // Ensure dp can handle up to `n`
    cout << maxPiece(n, a, b, c) << endl;

return 0;
}