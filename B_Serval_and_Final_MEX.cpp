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
    vector<int> a(n+1);
    for(int i = 1; i <= n; i ++ ) cin >> a[i];

    vector<int> pos_positive, pos_zero;
    for(int i = 1; i <= n; i ++ ){
        if(a[i] == 0) pos_zero.push_back(i);
        if(a[i] > 0 ) pos_positive.push_back(i);
    }
    
    // for(auto x : pos_positive) cout << x <<" " ;
    // for(auto x : pos_zero) cout << x <<" ";
    // cout << endl;
    if(pos_zero.size() == n){
        cout << 3 << endl;
        cout<< 1 <<" " << 2<<endl;
        cout<< 2 <<" " << n-1<<endl;
        cout<< 1 <<" " << 2<<endl;
    }
    else if(pos_zero.size() == 0){
        cout << 1 << endl;
        cout << 1 <<" " << n <<endl;
    }
    else if(pos_positive[0] == 1){
        cout << 2 <<endl;
        cout << 2 <<" "<< n << endl;
        cout << 1 <<" " << 2 << endl;
    }
    else if(pos_positive[pos_positive.size()-1] == n){
        cout << 2 << endl;
        cout << 1 <<" " << n -1 << endl;
        cout << 1 << " " << 2 << endl;
    }
    else{
        int pos = pos_positive[0];
        if(pos <= n - 2){
            cout << 3 << endl;
            cout << pos + 1 << " " << n << endl;
            cout << 1 << " " << pos << endl;
            cout << 1 << " " << 2 << endl;
        }
        else{
            cout << 3 << endl;
            cout << pos  << " " << n << endl;
            cout << 1 << " " << pos-1 << endl;
            cout << 1 << " " << 2 << endl;

        }
       
    }

}
return 0;
}