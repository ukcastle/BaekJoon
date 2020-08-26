#include <iostream>
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

	for (int i = 0; i < n; i++) {
		cout << nums[i] << " ";
	}
	return 0;
}