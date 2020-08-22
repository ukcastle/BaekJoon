#include <iostream>
#include <vector>
using namespace std;

int main() {



	int num{};
	cin >> num;

	register vector<pair<int,int>> numbers{};
	int temp{};
	for (int i = 0; i < num; i++) {
		cin >> temp;
		numbers.emplace_back(temp,i+1);
	}

	for (int i = 1; i < num; i++) {
		for (int j = 0; j < i; j++) {
			if (numbers[i].first > numbers[j].first) {
				if (numbers[i].second > 1) {
					numbers[i].second--;
				}
			}
			if (numbers[i].second == 1) { break; }
		}
	}

	for (auto i : numbers) {
		cout << i.second << endl;
	}

	return 0;
}
