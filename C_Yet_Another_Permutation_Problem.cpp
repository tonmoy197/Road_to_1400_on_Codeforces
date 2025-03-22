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
    int mx = n/2;
    set<int> st;
    st.insert(1);
    cout << 1 <<" ";
    for(int i = 2; i <= mx; i ++){
        int x = i;
        while(x <= n ){
            if(st.find(x) == st.end()){
                cout << x << " ";
                st.insert(x);
            }
            x *= 2;
        }
    }
    // for(int i = n/2 + 1; i <= n; i ++){
    //     if(i%2 == 1) cout << i <<" ";
    // } 
    // Add missing numbers
    for(int i = 1; i <= n; i++){
        if(st.find(i) == st.end()){
            cout << i << " ";
        }
    }
    cout << endl;

}
return 0;
}