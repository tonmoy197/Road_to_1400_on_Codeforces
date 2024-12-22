#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(m), q(k);
    unordered_map<int,int> freq;

    for(int i = 0; i < m; i ++) cin >> a[i];
    for(int i = 0; i < k ; i ++){
        cin >> q[i];
        freq[q[i]] ++;
    }

    // for(auto u : freq) cout << u.first <<" ";
    // cout<< ( freq.find(a[1]) == freq.end()) ;

    if ( n <= k ){
        for(int i = 0; i < m; i ++) cout << 1;
    }
    else if (n - 2 >= k){
        for(int i = 0; i < m; i ++) cout << 0;

    }
    else{
        for(int i = 0; i < m; i ++){
            if(freq.find(a[i]) == freq.end()) cout << 1;
            else cout << 0 ;
        }
    }
    cout << endl;


    

    
}
return 0;
}