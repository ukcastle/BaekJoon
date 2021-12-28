#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	if (n <= 1) { cout << n; return 0; }
	
	register long long first{ 0 }, second{ 1 }, temp{};
	for (int i = 1; i < n; i++) {
		temp = first;
		first = second;
		second = temp + second;
	}

	cout << second;

	return 0;
}