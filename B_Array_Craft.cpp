#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, x, y; cin >> n >> x >> y;
    vector<int> a(n, 1);
    x--;
    y--;

    int value = -1;
    if(y != 0){
        for(int i = y - 1; i >= 0; i --) {
            a[i] = value;
            value *= -1;
        }
    }

    value = -1;
    if(x != n - 1){
        for(int i = x + 1; i <= n-1; i ++){
            a[i] = value;
            value *= -1;

        } 
    }

    for(int i = 0; i < n; i ++) cout << a[i] << " ";
    cout << endl;
}
return 0;
}