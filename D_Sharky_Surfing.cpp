#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin >> T;
    while(T--){
        long long n,m,L; cin >> n >> m >> L;
        // We'll store hurdles as {l, r, 1}, power-ups as {x, v, 0}
        vector<array<long long,3>> ev; 
        ev.reserve(n + m);

        // Read hurdles: mark them with t=1
        for(int i=0; i<n; i++){
            long long l,r; cin >> l >> r;
            ev.push_back({l, r, 1});
        }
        // Read power-ups: mark them with t=0
        for(int i=0; i<m; i++){
            long long x,v; cin >> x >> v;
            ev.push_back({x, v, 0});
        }
        // Sort by position (the first element)
        sort(ev.begin(), ev.end(), [](auto &a, auto &b){return a[0] < b[0];});

        long long jump = 1;    // current jump power
        bool ok = true;        // can we pass all hurdles?
        priority_queue<long long> pq; // max-heap of power-ups

        // Process all events in ascending order of position
        for(auto &e : ev){
            long long a = e[0], b = e[1], t = e[2];
            if(t == 0){
                // t=0 => power-up, just store (push) in pq
                pq.push(b);
            } else {
                // t=1 => hurdle [a,b], need jump >= (b - a + 2)
                long long need = (b - a + 2);
                // Pop power-ups until we meet the needed jump
                while(!pq.empty() && jump < need){
                    jump += pq.top(); 
                    pq.pop();
                }
                // If still not enough, fail
                if(jump < need){
                    cout << -1 << "\n";
                    ok = false;
                    break;
                }
            }
        }
        // If we succeeded, used power-ups = total - still in pq
        if(ok) cout << (m - (int)pq.size()) << "\n";
    }
    return 0;
}
