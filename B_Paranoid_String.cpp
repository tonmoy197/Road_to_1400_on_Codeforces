#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    string s; cin >> s;
    ll ans = 0;
    ans += n;

    for(int i = 1; i < n; i ++){
        if(s[i] != s[i-1]){
            ans += i;
        }
    }
    // try : Contigious 1, then 0
    // int cnt = 0;
    // for(int i = 0; i < n; i ++){
    //     if(s[i] == '1') cnt ++;
    //     if(s[i] == '0') {
    //         ans += cnt;
    //         cnt = 0;
    //     }
    // }

    // // try : Contigious 0, then 1
    // cnt = 0;
    // for(int i = 0; i < n; i ++){
    //     if(s[i] == '0') cnt ++;
    //     if(s[i] == '1') {
    //         ans += cnt;
    //         cnt = 0;
    //     }
    // }

    // check whole string 
    // string ending =(n>=3)? s.substr(n-2, 2) : "";
    // string starting =(n>=3)? s.substr(0, 2) : "";
    // if( starting!= "11" &&  starting != "00" && ending != "11" && ending != "00" && n >= 4){
    //     if(s[0] == '1' && s[n-1] == '1') ans ++;
    //     else if(s[0] == '0' && s[n-1] == '0') ans ++;
    // }
    // bool ok = true;
    // int cnt0 = 0, cnt1 = 0;
    // for(int i = 0; i < n; ){
    //     while(s[i] == '1'){
    //         cnt1 ++;
    //         cnt0 = 0;
    //         i ++;
    //     }
    //     while(s[i] == '0'){
    //         cnt0 ++;
    //         cnt1 = 0;
    //         i ++;
    //     }
    // }


    cout << ans << endl;

}
return 0;
}