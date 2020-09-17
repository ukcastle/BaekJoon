#include <iostream>
#include <vector>
using namespace std;

// https://www.acmicpc.net/blog/view/9 세그먼트트리

long long init(vector<long long>& num,vector<long long>& tree,int node,int start,int end) {
	if (start == end) {
		return tree[node] = num[start];
	}
	else {
		return tree[node] = init(num, tree, node * 2, start, (start + end) / 2) 
			+ init(num, tree, node * 2 + 1, (start + end) / 2 + 1, end);
	}
}


long long sum(vector<long long>& tree, int node, int start, int end, int left, int right) {
	if (left > end || right < start) {
		return 0;
	}
	if (left <= start || end <= right) {
		return tree[node];
	}
	return sum(tree, node * 2, start, (start + end) / 2, left, right)
		+ sum(tree, node * 2 + 1, (start + end) / 2 + 1, end, right, left);
}

void update(vector<long long>& tree, int node, int start, int end, int index, long long diff) {
	if (index<start || index>end) { return; }
	tree[node] += diff;
	if (start != end) {
		update(tree, node * 2, start, (start + end) / 2, index, diff);
		update(tree, node * 2 + 1, (start + end) / 2 + 1, end, index, diff);
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n{}, numOfChange{}, numOfSum{};
	cin >> n >> numOfChange >> numOfSum;

	vector<long long> num(n);

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	vector<long long> tree(1 << (1 + (int)ceil(log2(n))));
	
	int type{}, num1{}, num2{};
	init(num, tree, 1, 0, n - 1);

	for (int i = 0; i < numOfChange + numOfSum; i++) {
		cin >> type >> num1 >> num2;
		if (type == 1) { //업데이트
			num1--;
			long long diff = num2 - num[num1];
			num[num1] = num2;
			update(tree, 1, 0, n - 1, num1, diff);
		}
		else { //값출력
			cout << sum(tree, 1, 0, n - 1, num1 - 1, num2 - 1) << endl;
		}
	}

	return 0;
}