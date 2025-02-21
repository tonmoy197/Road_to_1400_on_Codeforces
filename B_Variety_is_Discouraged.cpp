#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
using namespace std;
typedef long long ll;

int main() {
    int tt; 
    cin >> tt;
    while (tt--) {
        int n; 
        cin >> n; 
        vector<int> a(n);
        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        if (n == 1) {
            cout << 1 << " " << 1 << endl;
            continue;
        }


        int ans = 0, cnt = 0, l = -1, r = -1;

        for(int i = 0; i < n; i ++){
            if(freq[a[i]] == 1){
                cnt ++;
                if(cnt >= ans ){
                    ans = cnt ;
                    r = i + 1;
                    l = r - cnt + 1;
                }
            }
            else cnt = 0;
        }

        // map<int, int> ans;
        // for(int i = 0 ; i < left - 1 ; i ++) ans[a[i]] ++;
        // for(int i =  right ; i < n ; i ++) ans[a[i]] ++;

        // cout << n - (right - left + 1) << endl;
        if(r == -1 ){cout << 0 << endl; continue;}
        cout << l << " " << r << endl;


    }
    return 0;
}
