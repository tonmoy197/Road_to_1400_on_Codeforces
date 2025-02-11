#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    int n; cin >> n; 
    vector<int> a(n);

    for(int i = 0; i < n; i ++) cin >> a[i];

    bool ok = true;
    for(int i = 1; i < n ;i ++){
        if(a[i]%2 != a[0]%2) ok = false;
    }

    if(!ok) {
        cout << - 1 << endl;
        
    }
    else{
        sort(a.begin(), a.end());
        cout << 32 << endl;
        cout<< a[0] << " ";
        for(int i = 29; i >= 0; i --){
            cout << (1 << i) <<" ";
        }
        cout << 1 << endl;

    }
}
return 0;
}