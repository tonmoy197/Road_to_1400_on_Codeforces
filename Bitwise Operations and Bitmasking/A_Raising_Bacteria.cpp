//1000Rating :  https://codeforces.com/problemset/problem/579/A

// we put one bacteria into this box in the morning of (n + 1 - i)th day. 
//So the answer is the number of ones in the binary form of x.

#include <bits/stdc++.h>
using namespace std;
#define long long ll
 
int main()
{
    int n; cin >> n; 
    int cnt = 0;
    while(n){
        n &= (n-1);
        cnt ++;
    }
    cout<< cnt << "\n";

return 0;
}
