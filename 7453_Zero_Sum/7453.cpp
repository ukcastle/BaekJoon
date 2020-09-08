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

	vector<vector<long>> numbers(n, vector <long> (4));
	vector<long> a_b, c_d;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> numbers[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a_b.emplace_back(numbers[i][0] + numbers[j][1]);
			c_d.emplace_back(numbers[i][2] + numbers[j][3]);
		}
	}

	sort(c_d.begin(), c_d.end());

	int answer{};

	for (auto i : a_b) {
		auto lb = lower_bound(c_d.begin(), c_d.end(), -i);
		auto ub = upper_bound(c_d.begin(), c_d.end(), -i);
		answer += ub - lb;
	}

	cout << answer;
	
	return 0;
}