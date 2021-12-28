#include <iostream>
#include <queue>

using namespace std;

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

/*
	BFS를 이용
	+와 *을 하는 경우에는 초과했는지도 체크해야됨
	-일땐 0 미만으로 내려가는지 확인해야됨
	visit을 이용하여 
*/

int main() {

	register bool visit[100001]{}; // 레지스터는 쓸수록 강해진다

	int A{}, B{}, start{}, end{};
	cin >> A >> B >> start >> end;
	//-----------------입력값을 받는 단계

	register queue<pair<int, int>> q; //왼쪽:위치 오른쪽:카운트 & 레지스터(터지면 아마 이새끼탓)
	q.push({ start,0 });

	while (true) {
		int location = q.front().first;
		int cnt = q.front().second; //호출하면서 카운트를 1 늘림
		q.pop();

		if (location == end) { cout << cnt; break; } // 맞으면 빼고 while문 탈출
		cnt++; // 아니면 넣고 ㅋ

		if (location + A <= end && !visit[location + A]) {
			q.push({ location + A, cnt });
			visit[location + A] = true;
		} // +A

		if (location + B <= end && !visit[location + B]) {
			q.push({ location + B, cnt });
			visit[location + B] = true;
		} // +B

		if (location - A >= 0 && !visit[location - A]) {
			q.push({ location - A, cnt });
			visit[location - A] = true;
		} // -A

		if (location - B >= 0 && !visit[location - B]) {
			q.push({ location - B, cnt });
			visit[location - B] = true;
		} // -B

		if (location * A <= end && !visit[location * A]) {
			q.push({ location * A, cnt });
			visit[location * A] = true;
		} // *A

		if (location * B <= end && !visit[location * B]) {
			q.push({ location * B, cnt });
			visit[location * B] = true;
		} // *B

		if (location + 1 < end && !visit[location + 1]) {
			q.push({ location + 1, cnt });
			visit[location + 1] = true;
		} // +1

		if (location - 1 >= 0 && !visit[location - 1]) {
			q.push({ location - 1, cnt });
			visit[location - 1] = true;
		} // -1


	}

	return 0;
}