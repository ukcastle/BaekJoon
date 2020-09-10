#include <iostream>
using namespace std;
char tree[26][3]; //[n][0] 본인 [1]왼쪽 [2]오른쪽

void preOrder(char root[3]) {
	if (root[0] == '.') { return; }
	cout << root[0];
	preOrder(tree[root[1] - 'A']);
	preOrder(tree[root[2] - 'A']);
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n{};
	cin >> n;

	int temp,left,right;
	for (int i{0}; i < n; i++) {
		cin >> temp>>left>>right;
		tree[temp - 'A'][0] = temp;
		tree[temp - 'A'][1] = left;
		tree[temp - 'A'][2] = right;
		
	}
	
	preOrder(tree[0]);

	return 0;
}