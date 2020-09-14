#include <iostream>
using namespace std;

long long num[1000000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n{}, numOfChange{}, numOfSum{};
	cin >> n >> numOfChange >> numOfSum;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
		cout << num[i] << endl;
	}

	int type{}, num1{}, num2{};
	for (int i = 0; i < numOfChange + numOfSum; i++) {
		cin >> type >> num1 >> num2;
		cout << type << num1 << num2 << endl;
	}

	return 0;
}