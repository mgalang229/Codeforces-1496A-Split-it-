#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		string s;
		cin >> n >> k >> s;
		int ok = 1;
		// check if the first and last 'k' characters are a palindrome
		for (int i = 0; i < k; i++) {
			ok = ok && s[i] == s[n - 1 - i];
		}
		// check also if there is a remaining character in the middle of the first
		// and last 'k' characters (2 * 'k' should not be equal to 'n')
		cout << (ok && k * 2 < n ? "YES" : "NO") << '\n';
	}
	return 0;
}
