#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tt; 
    cin >> tt;
    while (tt--) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;

        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        string result = "";
        while (!mp.empty()) {
            vector<char> to_erase; // To store characters to be erased
            for (auto &x : mp) {
                char c = x.first;
                result += c;
                mp[c]--;
                if (mp[c] == 0) {
                    to_erase.push_back(c); // Mark character for erasure
                }
            }
            // Erase characters after the iteration to avoid modifying map while iterating
            for (char c : to_erase) {
                mp.erase(c);
            }
        }

        cout << result << endl;
    }
    return 0;
}
