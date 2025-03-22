#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long a[1010];
 
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) cin >> a[i];
		int now = n;
		long long ans = -1e18;
		for (int i = 1; i <= n; i++){
			long long sum = 0;
			for (int i = 1; i <= now; i++) sum = (sum + a[i]) ;
			if (i == 1) ans = max(ans, sum);
			else ans = max(ans, max(sum, ( - sum) ));
			for (int i = 1; i < now; i++) a[i] = (a[i + 1] - a[i]) ;
			now--;
		}
		cout << ans << endl; 
	}
	return 0;
}