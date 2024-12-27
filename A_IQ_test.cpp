// https://codeforces.com/problemset/problem/25/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> vec;
    for(int i = 0; i < n; i ++){
        cin >> a[i];
        if(a[i] % 2 == 0) vec.push_back({2, i});
        else vec.push_back({1, i});
    } 

    sort(vec.begin(), vec.end());
    
    if(vec[0].first == vec[1].first) cout << vec[n-1].second + 1<<endl;
    else cout << vec[0].second + 1 << endl;


return 0;
}