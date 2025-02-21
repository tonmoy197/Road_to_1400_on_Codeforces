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
    vector<int> a(n), b(n);
    map<int, int > freq1, freq2;

    for(auto &x : a ){
        cin >> x;
        freq1[x] ++;
    }
    for(auto &x : b ){
        cin >> x;
        freq2[x] ++;
    } 

    if(freq1.size() + freq2.size() >= 4 ) cout << "YES" << endl;
    else cout << "NO" << endl;



}
return 0;
}