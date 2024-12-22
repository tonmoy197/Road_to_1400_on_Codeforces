// Q: Given a string, find the length of the longest substring that 
// contains at most k dintinct characters
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int longestDistinctSubstring(string s, int k){
    map<char,int> freq;
    int start = 0, max_len = 0;
    int n = s.size();

    for(int end = 0; end < n; end ++){
        freq[s[end]] ++;

        while (freq.size() > k)
        {
            freq[s[start]] --;
            if(freq[s[start]] == 0 ) freq.erase(s[start]);
            start ++;
        }
        max_len = max(max_len, end - start + 1);
    }

    return max_len;
}

int main()
{
    string s = "eceba";
    int k = 2;
    cout << longestDistinctSubstring(s, k) << endl;
return 0;
}