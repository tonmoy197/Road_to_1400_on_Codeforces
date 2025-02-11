#include <iostream>
#include <utility>
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
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i ++) a[i] = i;
    swap(a[1], a[2]);

    auto answer = [&](vector<int> p){
        int k = 0; 
        for(int i = 1; i <= n; i ++){
            if(i % 2 == 1) k &= p[i]; 
            if(i % 2 == 0) k |= p[i];
        }
        cout << k << endl;
        for(int i = 1; i <= n; i ++) cout << p[i] << " ";
        cout << endl;
    };

    if(n % 2 == 1 ) {
        answer(a);
        continue;
    }

    vector<int> f;

    int v = 4; 
    while(v*2 <= n){
        v *= 2;
    }

    f.push_back(0);
    for(int i = v + 1; i <= n; i ++ ){
        f.push_back(i);
    }
    f.push_back(2);
    f.push_back(1);
    for(int i = 3; i <= v; i ++) f.push_back(i);
    answer(f);

}
return 0;
}