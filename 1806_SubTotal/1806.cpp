#include <iostream>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	register int nums[100000];
	int n, target;
	cin >> n >> target;

	register int num;
	cin >> nums[0];
	if (nums[0] == target) { cout << "1"; return 0; }

	for (int i = 1; i < n; i++) {
		cin >> num;
		if (num == target) { cout << "1"; return 0; }
		nums[i] = nums[i - 1] + num;
	} 
	//-------------------------------값을 받는 단계

	for (int i = 2; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (nums[j] - nums[j - i] >= target) {
				cout << i;
				return 0;
			}
		}
	}

	cout << "0";

	return 0;
}