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

    vector<int> prefix(n + 1, 0), postfix(n + 1, 0);
    map<char, int> pre, post;
    for(int i = 1; i <= n; i ++){
        pre[s[i-1]] ++;
        prefix[i] = pre.size();
    }

    for(int i = n; i >= 1; i --){
        post[s[i-1]] ++;
        postfix[i] = post.size();
    }

    int mx = 0;
    for(int i = 1; i < n; i ++){
        // cout << prefix[i] << " " << postfix[i+1] << endl;
        if(prefix[i] + postfix[i+1] > mx){
            mx = prefix[i] + postfix[i+1];
        }
    }
    cout << mx << endl;




}
return 0;
}