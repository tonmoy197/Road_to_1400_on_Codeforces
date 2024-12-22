// Q: Given a string and a pattern p, 
// find all starting indices of p's anagram in s

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// An anagram of a string is a rearrangement of its characters to form another string. For example, the string "abc" has the following anagrams: "abc", "acb", "bac", "bca", "cab", and "cba"
// Logic : 
// 1. Use a sliding window of size equal to the length of p.
// 2. Maintain a frequency count of characters in the current window (window_freq) 
// and compare it with the frequency count of p (p_freq).
vector<int> findAnagrams(string &s, string &p){
    vector<int> result;
    unordered_map<char, int> p_freq, window_freq;

    // building frequency map of p
    for(auto c : p) p_freq[c]++;

    int start = 0; 
    for(int end = 0; end < s.size(); end ++){
        // add current character to the window
        window_freq[s[end]] ++ ;

        // Shrink the window if its size exceeds the size of p
        while(end - start + 1 > p.size()){
            window_freq[s[start]] -- ;
            if(window_freq[s[start]] == 0) window_freq.erase(s[start]);
            start ++;
        }

        // Compare the frequency maps
        if(window_freq == p_freq){
            result.push_back(start);
        }
    }
    return result ;
}

int main()
{
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> anagrams = findAnagrams(s, p);
    
    cout << " Anagram Indices : " ;
    for(auto idx : anagrams) cout << idx << " ";

return 0;
}