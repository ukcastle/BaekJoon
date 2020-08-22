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

	return 0;
}
