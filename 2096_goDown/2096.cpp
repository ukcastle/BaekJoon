#include <iostream>
using namespace std;

int maxNum[100000][3];
int minNum[100000][3];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n{};
	cin >> n;

	int l, c, r;
	cin >> l >> c >> r;
	maxNum[0][0] = minNum[0][0] = l;
	maxNum[0][1] = minNum[0][1] = c;
	maxNum[0][2] = minNum[0][2] = r;

	for (int i = 1; i < n; i++) {
		cin >> l >> c >> r;
		maxNum[i][0] = max(maxNum[i - 1][0] + l, maxNum[i - 1][0] + c);
		maxNum[i][1] = max(max(maxNum[i - 1][1] + l, maxNum[i - 1][1] + c), maxNum[i - 1][1] + r);
		maxNum[i][2] = max(maxNum[i - 1][2] + c, maxNum[i - 1][2] + r);
		
		minNum[i][0] = min(minNum[i - 1][0] + l, minNum[i - 1][0] + c);
		minNum[i][1] = min(min(minNum[i - 1][1] + l, minNum[i - 1][1] + c), minNum[i - 1][1] + r);
		minNum[i][2] = min(minNum[i - 1][2] + c, minNum[i - 1][2] + r);
	}


	cout << max(max(maxNum[n - 1][0], maxNum[n - 1][1]), maxNum[n - 1][2])<<" ";
	cout << min(min(minNum[n - 1][0], minNum[n - 1][1]), minNum[n - 1][2]);
	
	return 0;
}
