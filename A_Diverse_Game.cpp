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
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m));
    for(int i = 0; i <n; i ++){
        for(int j = 0; j < m; j ++){
            cin >> a[i][j] ;
            // cout << a[i][j]<<" ";
        }
        // cout <<endl;
    }

    if(n == 1 && m == 1) {
        cout << -1 << endl;
        continue;
    }
    else if(m == 1 ){
        for(int i = 1; i <n; i ++){
            cout << a[i][0] <<endl;
        }
        cout << a[0][0] <<endl;
        continue;

    }
    for(int i = 0; i <n; i ++){
        for(int j = 1; j < m; j ++){
           cout << a[i][j] << " ";
        }
        cout << a[i][0] << endl;
    }


}
return 0;
}