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
    int n, k; cin >> n >> k;
    if(n == k){
        for(int i = 1; i <= n; i ++) cout << 1 <<" ";
        cout << endl;
    }
    else if(k == 1){
        cout << n << " ";
        for(int i = 1 ; i < n; i ++) cout << i << " ";
        cout << endl;
    }
    else cout << - 1 << endl;

}
return 0;
}