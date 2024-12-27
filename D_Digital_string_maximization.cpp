// https://codeforces.com/problemset/problem/2050/D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
int tt; cin >> tt;
while( tt -- ){
    string s; cin >> s;

    int n = s.size();

    for(int i = 0; i < n; i ++){
        int best = s[i] - '0';
        int pos = i;

        for (int j = i; j < min(i + 10, n) ; j ++){
            int val = s[j] - '0' - (j - i);
            if(val > best ) {
                best = val;
                pos = j;
            }
        }

        // Bubble the chosen digit (at 'pos') back to index i
        while(i < pos){
            swap(s[pos], s[pos - 1]);
            pos --;
        }

        s[i] = best + '0';

    }

    cout << s << endl;

}
return 0;
}