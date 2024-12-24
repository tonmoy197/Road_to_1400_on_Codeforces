#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int n, l ; cin >> n >> l;
    vector<int> arr(n);
    for(int i = 0; i < n; i ++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int max_dis = 0, max_ind = 0;
    for(int i = 1; i < n; i ++){
        if(max_dis < arr[i] - arr[i-1]){
            max_dis =  arr[i] - arr[i-1];
            max_ind = i;
        }
        
    }

    double ans = (double)max_dis/2.0;
    double x =  max(arr[0] - 0, l - arr[n-1]);
    double result = max(ans, x);
    // Set precision to 6 decimal places
    cout << fixed << setprecision(10) << result << endl;


    
return 0;
}