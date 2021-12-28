#include <iostream>
#include <queue>

using namespace std;

/*
	8���� ���
	+1
	-1
	A��ŭ + �̵�
	A��ŭ - �̵�
	B��ŭ + �̵�
	B��ŭ - �̵�
	����ġ * A
	����ġ * B
*/

/*
	BFS�� �̿�
	+�� *�� �ϴ� ��쿡�� �ʰ��ߴ����� üũ�ؾߵ�
	-�϶� 0 �̸����� ���������� Ȯ���ؾߵ�
	visit�� �̿��Ͽ� 
*/

int main() {

	register bool visit[100001]{}; // �������ʹ� ������ ��������

	int A{}, B{}, start{}, end{};
	cin >> A >> B >> start >> end;
	//-----------------�Է°��� �޴� �ܰ�

	register queue<pair<int, int>> q; //����:��ġ ������:ī��Ʈ & ��������(������ �Ƹ� �̻���ſ)
	q.push({ start,0 });

	while (true) {
		int location = q.front().first;
		int cnt = q.front().second; //ȣ���ϸ鼭 ī��Ʈ�� 1 �ø�
		q.pop();

		if (location == end) { cout << cnt; break; } // ������ ���� while�� Ż��
		cnt++; // �ƴϸ� �ְ� ��

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