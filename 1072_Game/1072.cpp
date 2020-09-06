#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int total, win;

	cin >> total >> win;

	int targetRate = (double)win / (double)total * 100 + 1;
	long long int firstWin = win;

	if (targetRate >= 100) {
		cout << "-1";
		return 0;
	}

	while (true) {
		long long int rate = (double)win++ / (double)total++ * 100;
		if (rate == targetRate) {
			cout << win - firstWin;
			return 0;
		}
	}
}