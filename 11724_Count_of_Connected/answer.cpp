#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n{}, m{};

	cin >> n >> m;
	vector<pair<int, int>> input;
	for (int i = 0; i < m; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		input.emplace_back(n1, n2);
	}
	//-----------
	for (auto i : input) {
		cout << i.first << i.second << endl;
	}

	return 0;
}
