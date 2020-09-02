#include <iostream>
#include <queue>
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
	cin >> l >> c >> r;
	maxNum[0] = minNum[0] = l;
	maxNum[1] = minNum[1] = c;
	maxNum[2] = minNum[2] = r;


	for (int i = 1; i < n; i++) {
		cin >> l >> c >> r;
		int tempL = max(l, c);
		int tempC = max(tempL, r);
		int tempR = max(c, r);

		maxNum[0] += tempL;
		maxNum[1] += tempC;
		maxNum[2] += tempR;

		tempL = min(l, c);
		tempC = min(tempL, r);
		tempR = min(c, r);

		minNum[0] += tempL;
		minNum[1] += tempC;
		minNum[2] += tempR;
	}


	cout << max(max(maxNum[0], maxNum[1]), maxNum[2])<<" ";
	cout << min(min(minNum[0], minNum[1]), minNum[2]);
	
	return 0;
}
