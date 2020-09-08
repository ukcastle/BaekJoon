#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n{};
	cin >> n;

	vector<vector<long long int>> numbers(n,vector<long long int>(4));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> numbers[i][j];
		}
	}

	

	return 0;
}