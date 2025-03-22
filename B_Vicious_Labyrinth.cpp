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
    if(k % 2 == 1){
        for(int i = 1;  i <= n -2 ; i ++)  cout << n  <<" ";
    }
    else{
        for(int i = 1;  i <= n -2 ; i ++)  cout << n - 1 <<" ";

    }

    cout << n << " " << n - 1 << endl;

}
return 0;
}