#include <iostream>
// #include <vector>
#include <map>
using namespace std;


int main() {
    int m;
    cin >> m;
    
    map<long long, int> multiset;
    for (int i = 0; i < m; i++) {
        int type, value; cin >> type >> value;

        if (type == 1) { // ADD query
            multiset[1LL << value]++;
        } 
        else if (type == 2) { // GET query
            long long target = value;
            for (auto it = multiset.begin(); it != multiset.end() && target > 0; ++it) {
                long long power = it->first;
                int count = it->second;
                long long take = min(target / power, (long long)count);
                target -= take * power;
            }
            cout << (target == 0 ? "YES" : "NO") << "\n";
        }
    }
    return 0;
}
