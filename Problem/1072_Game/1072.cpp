#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long total, win;

	cin >> total >> win;

	long long rate{ 100 * win / total };
	if (rate >= 99) {
		cout << "-1";
		return 0;
	}
	
	int low{ 0 }, high{ 1000000000 };
	
	int result{ -1 };

	while (low <= high) {
		int mid{ (low + high) / 2 };
		long long tempRate{ 100 * (win + mid) / (total + mid) };

		if (rate >= tempRate) {
			result = mid + 1;
			low = mid + 1;
		}
		else {
			high = mid -1;
		}
	}

	cout << result;
	return 0;
}