#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num{};
	cin >> num;

	register vector<pair<int,int>> numbers{};
	register int temp{};
	for (int i = 0; i < num; i++) {
		cin >> temp;
		numbers.emplace_back(temp,i);
	}

	sort(numbers.begin(), numbers.end());

	for (int i = 0; i < num; i++) {
		numbers[i].first = i;
	}
	
	sort(numbers.begin(), numbers.end(),
		[](pair<int, int> first, pair<int, int> second) -> bool {
			return first.second < second.second;
		});
	// 상대적인 실력으로 바꾼 뒤, 들어온 순서대로 다시 재정렬
	
	
	for (auto i : numbers) {
		cout << i.first << "\t" << i.second << endl;
	}
	

	
	return 0;
}
