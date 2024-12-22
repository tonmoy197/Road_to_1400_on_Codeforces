#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n;
    string s; cin >> s;

    int cnt = 0, win_cnt = 0, start = 0;

    for(int end = 1; end < n; end ++ ){
        
        if(s[end] == '1' && s[end - 1] == '1') win_cnt ++;
    }

    cout << win_cnt << endl;
}
return 0;
}