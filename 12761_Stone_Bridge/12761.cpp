#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*
	방법
	+1
	-1
	A만큼 + 이동
	A만큼 - 이동
	B만큼 + 이동
	B만큼 - 이동
	현위치 * A
	현위치 * B
*/

/*
	pair를 만들어서 현재위치와 cnt 저장
	bfs쓰면 풀리지 않을까?
	재귀쓰면 메모리터질거같은데
*/

int main() {
	
	int A{}, B{}, start{}, end{};
	cin >> A >> B >> start >> end;
	//-----------------입력값을 받는 단계

	queue<pair<int, int>> q; //왼쪽:위치 오른쪽:카운트
	q.push(make_pair(start,0));

	while (true) {
		int location = q.front().first;
		int cnt = q.front().second+1; //호출하면서 카운트를 1 늘림
		q.pop();
	}

	return 0;
}