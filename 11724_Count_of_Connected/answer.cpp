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

	//BFS , visit�̿��ؼ� �ߺ�����



	//visit[0] = true;

	vector<bool> visit(n, false);
	int cnt{}; // ��� ��带 ���Ҵ��� üũ�ϴ� ����
	int result{}; // ������ �����ϴ� ����

	while (cnt < n) { //��� ��带 ��������

		queue<int> q;
		for (int i = 0; i < n; i++) { // ť�� ù��° ���� �ε����� �������ִ� �ܰ�
			if (!visit[i]) {
				q.push(i); visit[i] = true;
				break; // �鸰���� ���� �� ť�� ù��°�� �־��ְ� for�� Ż�� ( ù������ ������ 0)
			}
		}

		while (!q.empty()) { // ����Ǿ��ִ� ������ Ž��
			int temp = q.front();
			cnt++; // ��带 ����� �� ���� 1 ����
			q.pop();

			for (int i = 0; i < n; i++) {
				if (input[temp][i] == 1 && temp != i && !visit[i]) { // �̾����ְ�, �ڱ��ڽ��� �ƴϰ�, �鸰���� ������
					q.push(i);
					visit[i] = true;
				}
			}
		}

		result++; // ť�� ����� ��(���̻� ����Ǿ��ִ� ��尡 ���� ��) 1 �߰�
	}
	
	cout << result;

	return 0;
}
