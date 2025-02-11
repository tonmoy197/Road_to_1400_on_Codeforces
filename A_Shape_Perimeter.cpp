#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, m; cin >> n >> m;
    int startx, starty ; cin >> startx >> starty;
    int endx = startx, endy = starty; 
    n --;
    while(n --){
        int x, y; cin >> x >> y;
        endx += x;
        endy += y;
    }

    endx += m;
    endy += m;

    int ans = (endx - startx) * 2 + (endy - starty) * 2;
    cout << ans << endl;
}
return 0;
}