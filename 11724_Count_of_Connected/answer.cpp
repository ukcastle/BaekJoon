#include <iostream>
#include <vector>

#include <queue>
using namespace std;

int main() {
	int n{}, m{};
	cin >> n >> m;

	vector<vector<int>> input(n, vector<int>(n,0));
	
	for (int i = 0; i < n; i++) { // �ڱ� �ڽ� ����(1)
		input[i][i] = 1;
	}

	// �̾������� 1
	// 1 1 0
	// 1 1 0 
	// 0 0 1  (�������)
	for (int i = 0; i < m; i++) {
		int n1{}, n2{};
		cin >> n1 >> n2;
		
		input[n1-1][n2-1] = 1;
		input[n2-1][n1-1] = 1;
	}


	//----------- �Է°��� �޴� �ܰ�


	

	return 0;
}
