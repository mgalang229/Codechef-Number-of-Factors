#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		map<int, int> mp;
		// perform prime factorization and store the frequency (exponent) of each prime divisor
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			int factor = 2;
			while (a > 1) {
				if (a % factor == 0) {
					mp[factor]++;
					a /= factor;
				} else {
					factor++;
				}
			}
		}
		// calculate the product of all frequencies (exponents) of the prime numbers
		// don't forget to add one (1) to every frequency since every number can be divided by one (1)
		int ans = 1;
		for (auto& x : mp) {
			ans *= (x.second + 1);
		}
		cout << ans << '\n';
	}
	return 0;
}
