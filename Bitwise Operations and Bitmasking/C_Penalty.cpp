// https://codeforces.com/problemset/problem/1553/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    string s; cin >> s; 
    int ans = 9;

    // Let first team will win 
    int score1 = 0, score2 = 0;
    int remaining1 = 5, remaining2 = 5;
    for(int i = 0; i < 10; i ++){
        if(i % 2 == 0){
            score1 += (s[i] == '1' || s[i] == '?' );
            remaining1 --;
        } 
        else{
            score2 += (s[i] == '1');
            remaining2 -- ;
        } 

        if(score1 > remaining2 + score2) ans = min(ans, i);
        if(score2 > remaining1 + score1) ans = min(ans, i);

    }

    // second team will win
    score1 = 0;
    score2 = 0;
    remaining1 = 5;
    remaining2 = 5;
    for(int i = 0; i < 10; i ++){
        if(i % 2 == 1){
            score2 += (s[i] == '1' || s[i] == '?' );
            remaining2 -- ;
        }
        else{
            score1 += (s[i] == '1');
            remaining1 --;
        }

        if(score1 > remaining2 + score2) ans = min(ans, i);
        if(score2 > remaining1 + score1) ans = min(ans, i);
    }

    cout << ans + 1 << endl;


}
return 0;
}