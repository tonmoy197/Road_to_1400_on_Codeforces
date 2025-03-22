#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n, x; cin >> n >> x;
        if (x == 0) {
            for (int i = 0; i < n; i++) cout << 0 << (i < n-1 ? " " : "");
            cout << endl;
            continue;
        }
        vector<int> arr;
        set<int> seen;
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(0); seen.insert(0);
        while (arr.size() < n) {
            int y = pq.top(); pq.pop();
            arr.push_back(y);
            for (int i = 0; i < 30; i++) {
                if ((x & (1 << i)) && !(y & (1 << i))) {
                    int new_y = y | (1 << i);
                    if (seen.find(new_y) == seen.end()) {
                        seen.insert(new_y);
                        pq.push(new_y);
                    }
                }
            }
        }
        int or_value = 0;
        for (int num : arr) or_value |= num;
        if (or_value != x) arr[n-1] = x;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << (i < n-1 ? " " : "");
        }
        cout << endl;
    }
    return 0;
}