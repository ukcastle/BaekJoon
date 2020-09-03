#include <iostream>
using namespace std;

int maxNum[3];
int minNum[3];

/*
3
1 0 0
0 1 0
0 0 1
*/
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
		int tempL = max(maxNum[0], maxNum[1]);
		int tempC = max(max(maxNum[0], maxNum[1]), maxNum[2]);
		int tempR = max(maxNum[1], maxNum[2]);

		maxNum[0] = tempL + l;
		maxNum[1] = tempC + c;
		maxNum[2] = tempR + r;

		tempL = min(minNum[0], minNum[1]);
		tempC = min(min(minNum[0], minNum[1]), minNum[2]);
		tempR = min(minNum[1], minNum[2]);

		minNum[0] = tempL + l;
		minNum[1] = tempC + c;
		minNum[2] = tempR + r;
	}


	cout << max(max(maxNum[0], maxNum[1]), maxNum[2])<<" ";
	cout << min(min(minNum[0], minNum[1]), minNum[2]);
	
	return 0;
}
