#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n{};
	cin >> n;

	vector<vector<long long>> numbers(n, vector <long long> (4));
	vector<long long> c_d;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> numbers[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c_d.emplace_back(numbers[i][2] + numbers[j][3]);
		}
	}
	sort(c_d.begin(), c_d.end());

	int answer{};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			long long temp = numbers[i][0] + numbers[j][1];
			auto lb = lower_bound(c_d.begin(), c_d.end(), -temp);
			auto ub = upper_bound(c_d.begin(), c_d.end(), -temp);
			answer += ub - lb;
		}
	}

	cout << answer;
	
	return 0;
}