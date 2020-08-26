#include <iostream>
using namespace std;

int main() {
	register int nums[10000];
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, target;
	cin >> n >> target;
	
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	for (int i = 0; i < n; i++) {
		cout << nums[i];
	}

	return 0;

}