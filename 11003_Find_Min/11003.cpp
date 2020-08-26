#include <iostream>
#include <algorithm>
using namespace std;

int nums[5000000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, l;
	cin >> n >> l;

	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	for (int i = 2; i < n; i++) {
		cout << *min_element(nums + i - 2, nums + i) << " "; //대충이거이용해서
	}
	return 0;
}