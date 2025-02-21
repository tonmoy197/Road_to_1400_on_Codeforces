#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; 
    cin >> t;
    // ALL is 2^31 - 1 (i.e. all ones in the 31 least-significant bits)
    const unsigned int ALL = (1u << 31) - 1;
    
    while(t--){
        int n; 
        cin >> n;
        unordered_map<unsigned int, int> freq;
        freq.reserve(n*2);
        
        vector<unsigned int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            freq[arr[i]]++;
        }
 
        long long ans = 0;
        unordered_set<unsigned int> processed;
        processed.reserve(n*2);
 
        // Process each unique number
        for(auto &p : freq){
            unsigned int x = p.first;
            // Skip if x has been paired already
            if(processed.find(x) != processed.end())
                continue;
            unsigned int comp = ALL ^ x; // complement of x in 31 bits
            if(freq.find(comp) != freq.end()){
                // If both x and comp exist, process the pair only once.
                // We choose to process only if x < comp to avoid double counting.
                if(x < comp){
                    ans += max(p.second, freq[comp]);
                    processed.insert(x);
                    processed.insert(comp);
                } else {
                    // if x > comp, then comp has been (or will be) processed.
                    continue;
                }
            } else {
                // If the complement does not exist, each occurrence of x must be in its own group.
                ans += p.second;
                processed.insert(x);
            }
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}
