#include <iostream>
using namespace std;

int maxNum[3];
int minNum[3];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n{};
	cin >> n;

	int l, c, r;
	
	for (int i = 0; i < n; i++) {
		cin >> l >> c >> r;
		int tempL = max(maxNum[0] + l, maxNum[0] + c);
		int tempC = max(max(maxNum[1] + l, maxNum[1] + c), maxNum[1] + r);
		int tempR = max(maxNum[2] + c, maxNum[2] + r);

		maxNum[0] = tempL;
		maxNum[1] = tempC;
		maxNum[2] = tempR;

		tempL = min(minNum[0] + l, minNum[0] + c);
		tempC = min(min(minNum[1] + l, minNum[1] + c), minNum[1] + r);
		tempR = min(minNum[2] + c, minNum[2] + r);

		minNum[0] = tempL;
		minNum[1] = tempC;
		minNum[2] = tempR;
	}


	cout << max(max(maxNum[0], maxNum[1]), maxNum[2])<<" ";
	cout << min(min(minNum[0], minNum[1]), minNum[2]);
	
	return 0;
}
