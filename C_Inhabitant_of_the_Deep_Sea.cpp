#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        int64_t k;
        cin >> n >> k;

        vector<int> elements(n);
        for (int &element : elements) {
            cin >> element;
        }

        int64_t totalSum = accumulate(elements.begin(), elements.end(), int64_t(0));

        if (totalSum <= k) {
            cout << n << '\n';
            continue;
        }

        int64_t leftThreshold = (k + 1) / 2;
        int count = 0;

        // Process elements from the start
        for (int &element : elements) {
            if (element <= leftThreshold) {
                leftThreshold -= element;
                element = 0;
                count++;
            } else {
                break;
            }
        }

        int64_t rightThreshold = k / 2;

        // Process elements from the end
        for (auto it = elements.rbegin(); it != elements.rend(); ++it) {
            if (*it <= rightThreshold) {
                rightThreshold -= *it;
                *it = 0;
                count++;
            } else {
                break;
            }
        }

        cout << count << '\n';
    }

    return 0;
}
