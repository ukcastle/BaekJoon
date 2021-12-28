#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[4000], b[4000], c[4000], d[4000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n{};
	cin >> n;

	vector<long long> c_d;

	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c_d.emplace_back(c[i]+d[j]);
		}
	}

	sort(c_d.begin(), c_d.end());
	
	long long answer{};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			long long temp = ((long long)a[i] + (long long)b[j])*(-1);
			auto lb = lower_bound(c_d.begin(), c_d.end(), temp) - c_d.begin();
			auto ub = upper_bound(c_d.begin(), c_d.end(), temp) - c_d.begin();

			answer += ub - lb;
		}
	}

	cout << answer;
	
	return 0;
}