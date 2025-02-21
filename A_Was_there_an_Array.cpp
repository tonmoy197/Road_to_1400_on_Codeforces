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
    vector<int> b(n-2);
    for(auto &x : b) cin >> x;

    bool ok = true;
    for(int i = 0; i < n-4; i ++){
       if(b[i] == 1 && b[i+1] == 0 && b[i+2] == 1) ok = false;
    }

    cout << (ok?"YES":"NO") << endl;

}
return 0;
}