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
    // will take same value double 
    // or l, r has same value
    int n, k;  cin >> n >> k;
    vector<int> a(2*n);
    for(auto &x : a) cin >> x;

    map<int,int > left, right;
    for(int i = 0; i < n; i ++) left[a[i]] ++;
    for(int i = n; i < 2*n; i ++) right[a[i]] ++;

    vector<int> ansleft, ansright;
    for(auto [x,y] : left){
        if(ansleft.size() < 2*k){
            if(y == 1){
                ansleft.push_back(x);
                ansright.push_back(x);
            }
            if(y == 2 && ansleft.size() == 2*k -1 ){
                ansleft.pop_back();
                ansright.pop_back();
                ansleft.push_back(x);
                ansleft.push_back(x);
                continue;
            }
            if(y == 2 && ansleft.size() <= 2*k -1 ){
                ansleft.push_back(x);
                ansleft.push_back(x);
            }
        }
    }
    
    for(auto [x,y] : right){
        if(ansright.size() < 2*k){
            if(y == 2){
                ansright.push_back(x);
                ansright.push_back(x);
            }
        }
    }

    for(auto x : ansleft) cout << x << " ";
    cout<< endl;
    for(auto x : ansright) cout << x << " ";
    cout << endl;

    // cout << sizeleft << " "<< sizeright << endl;
}
return 0;
}