#include <iostream>
#include <queue>

using namespace std;

/*
	pair를 만들어서 현재위치와 cnt 저장
	bfs쓰면 풀리지 않을까?
	재귀쓰면 메모리터질거같은데
*/

/*
	8가지 방법
	+1
	-1
	A만큼 + 이동
	A만큼 - 이동
	B만큼 + 이동
	B만큼 - 이동
	현위치 * A
	현위치 * B
*/

int main() {
	
	int A{}, B{}, start{}, end{};
	cin >> A >> B >> start >> end;
	//-----------------입력값을 받는 단계
	if (start == end) { cout << 0; } //설마?

	queue<pair<int, int>> q; //왼쪽:위치 오른쪽:카운트
	q.push(make_pair(start,0));

	while (true) {
		int location = q.front().first;
		int cnt = q.front().second+1; //호출하면서 카운트를 1 늘림
		q.pop();

		if (location * A < end) { q.push(make_pair(location * A, cnt)); } // *A
		else if (location * A == end) { cout << cnt; break; }

		if (location * B < end) { q.push(make_pair(location * B, cnt)); } // *B
		else if (location * B == end) { cout << cnt; break; }

		if (location + A < end) { q.push(make_pair(location + A, cnt)); }
		else if (location + A == end) { cout << cnt; break; } // +A할땐 end보다 초과할수가 있음, 이럴 땐 제외

		if (location + B < end) { q.push(make_pair(location + B, cnt)); } // +B
		else if (location + B == end) { cout << cnt; break; }

		
		if (location + 1 < end) { q.push(make_pair(location + 1, cnt)); }
		else { cout << cnt; break; } // +1일 떈 초과할일이 없다

		if (location - A > start) { q.push(make_pair(location - A, cnt)); } // -A
		if (location - B > start) { q.push(make_pair(location - B, cnt)); } // -B
		if (location - 1 > start) { q.push(make_pair(location - 1, cnt)); } // -1 뒤로갔는데 end에 갈일은 없다


		



	}

	return 0;
}