#include <iostream>
using namespace std;
char tree[26][3]; //[n][0] 본인 [1]왼쪽 [2]오른쪽

void preOrder(char root[3]) {
	if (root[0] <= '.') { return; }
	else {
		cout << root[0];
		preOrder(tree[root[1] - 'A']);
		preOrder(tree[root[2] - 'A']);
	}
}

void inOrder(char root[3]) {
	if (root[0] <= '.') { return; }
	else {
		inOrder(tree[root[1] - 'A']);
		cout << root[0];
		inOrder(tree[root[2] - 'A']);
	}
}

void postOrder(char root[3]) {
	if (root[0] <= '.') { return; }
	else {
		postOrder(tree[root[1] - 'A']);
		postOrder(tree[root[2] - 'A']);
		cout << root[0];
	}
}


int main() {
	int n{};
	cin >> n;

	char temp;
	for (int i{0}; i < n; i++) {
		cin >> temp;
		tree[temp - 'A'][0] = temp;
		cin >> tree[temp - 'A'][1] >> tree[temp - 'A'][2];
	}
	
	preOrder(tree[0]); cout << endl;
	inOrder(tree[0]); cout << endl;
	postOrder(tree[0]); cout << endl;

	return 0;
}