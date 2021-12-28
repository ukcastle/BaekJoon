#include <iostream>
#include <vector>

#include <queue>
using namespace std;

int main() {
	int n{}, m{};
	cin >> n >> m;

	vector<vector<int>> input(n, vector<int>(n,0));
	
	for (int i = 0; i < n; i++) { // 자기 자신 연결(1)
		input[i][i] = 1;
	}

	// 이어진곳에 1
	// 1 1 0
	// 1 1 0 
	// 0 0 1  (예를들어)
	for (int i = 0; i < m; i++) {
		int n1{}, n2{};
		cin >> n1 >> n2;
		
		input[n1-1][n2-1] = 1;
		input[n2-1][n1-1] = 1;
	}


	//----------- 입력값을 받는 단계

	//BFS , visit이용해서 중복제거



	//visit[0] = true;

	vector<bool> visit(n, false);
	int cnt{}; // 모든 노드를 돌았는지 체크하는 변수
	int result{}; // 정답을 저장하는 변수

	while (cnt < n) { //모든 노드를 돌때까지

		queue<int> q;
		for (int i = 0; i < n; i++) { // 큐에 첫번째 넣을 인덱스를 설정해주는 단계
			if (!visit[i]) {
				q.push(i); visit[i] = true;
				break; // 들린적이 없을 때 큐에 첫번째로 넣어주고 for문 탈출 ( 첫번쨰는 무조건 0)
			}
		}

		while (!q.empty()) { // 연결되어있는 노드들을 탐색
			int temp = q.front();
			cnt++; // 노드를 들렸을 때 수를 1 증가
			q.pop();

			for (int i = 0; i < n; i++) {
				if (input[temp][i] == 1 && temp != i && !visit[i]) { // 이어져있고, 자기자신이 아니고, 들린적이 없으면
					q.push(i);
					visit[i] = true;
				}
			}
		}

		result++; // 큐가 비었을 때(더이상 연결되어있는 노드가 없을 때) 1 추가
	}
	
	cout << result;

	return 0;
}
