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
    string s; cin >> s;
    string x = "";
    x += s[0];
    for(int i = 1; i < n - 1; i ++){
        // consecutive consonant
        if((s[i] != 'a' && s[i] != 'e' )  && (s[i + 1] != 'a' && s[i+1] != 'e')){
            x += s[i];
            x += '.';
            x += s[i+1];
            i ++;
            // cout << s[i] <<" " << s[i+1] <<endl;
        }
        else if(s[i] == 'a' || s[i] == 'e'){
            x += s[i];
        }
        else{
            x += '.';
            x += s[i];
        }
    }
    x += s[n-1];

    cout << x << endl;
}
return 0;
}