#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


//https://www.crocus.co.kr/648 세그먼트트리
//https://www.crocus.co.kr/987 달리기해설


void update(vector<int>& tree, int node, int start, int end, int idx) {
	if (!(start <= idx && idx <= end)) { return; }

	tree[node] += 1;

	if (start != end) {
		int mid = (start + end) / 2;
		update(tree, node * 2, start, mid, idx);
		update(tree, node * 2 + 1, mid + 1, end, idx);
	}
}

int query(vector<int>& tree, int node, int start, int end, int left, int right) {
	if (start > right || end < left) { return 0; }
	if (left <= start && end <= right) { return tree[node]; }
	int mid = (start + end) / 2;

	return query(tree, node * 2, start, mid, left, right) + query(tree, node * 2 + 1, mid + 1, end, left, right);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num{};
	cin >> num;

	register vector<pair<int, int>> numbers{};
	register int temp{};
	for (int i = 0; i < num; i++) {
		cin >> temp;
		numbers.emplace_back(temp, i);
	}

	sort(numbers.begin(), numbers.end());

	for (int i = 0; i < num; i++) {
		numbers[i].first = i;
	}

	sort(numbers.begin(), numbers.end(),
		[](pair<int, int> first, pair<int, int> second) -> bool {
			return first.second < second.second;
		});

	vector<int> tree(1 << (1 + ((int)ceil(log2(500000)))));

	for (int i = 0; i < num; i++) {
		cout << i + 1 - query(tree, 1, 0, 500000, 0, numbers[i].first) << "\n";
		update(tree, 1, 0, 500000, numbers[i].first);
	}

	return 0;
}
