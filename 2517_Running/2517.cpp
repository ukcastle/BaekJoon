#include <iostream>
#include <vector>
using namespace std;

int main() {

	int num{};
	cin >> num;

	vector<int> numbers{};
	int temp{};
	for (int i = 0; i < num; i++) {
		cin >> temp;
		numbers.push_back(temp);
	}

	for (auto i : numbers) {
		cout << i << endl;
	}

	return 0;
}