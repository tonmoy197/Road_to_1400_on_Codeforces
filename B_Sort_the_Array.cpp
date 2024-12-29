#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n; 
    vector<int> a(n);

    for(int i = 0; i < n; i ++) cin >> a[i];

    // identify starting of the decreasing array 
    int start = 0;
    while(start < n - 1 && a[start] <= a[start + 1]) start ++;

    // cout << start <<" ";
    // Check its sorted or not 
    if(start == n - 1){
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }

    // identify ending of the decreasing array
    int end = n - 1;
    while(end >= 0 && a[end] >= a[end - 1]) end --;

    // reverse segment start and end
    reverse(a.begin() + start, a.begin() + end + 1);

    // Checking Sorted or not 
    if( is_sorted(a.begin(), a.end())){
        cout << "yes" << endl;
        cout << start + 1 << " " << end + 1 << endl;
    }
    else cout << "no" << endl;


return 0;
}