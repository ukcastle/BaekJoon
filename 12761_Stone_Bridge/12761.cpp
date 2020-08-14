#include <iostream>
#include <queue>

using namespace std;

/*
	pair�� ���� ������ġ�� cnt ����
	bfs���� Ǯ���� ������?
	��;��� �޸������Ű�����
*/

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

int main() {
	
	int A{}, B{}, start{}, end{};
	cin >> A >> B >> start >> end;
	//-----------------�Է°��� �޴� �ܰ�
	if (start == end) { cout << 0; } //����?

	queue<pair<int, int>> q; //����:��ġ ������:ī��Ʈ
	q.push(make_pair(start,0));

	while (true) {
		int location = q.front().first;
		int cnt = q.front().second+1; //ȣ���ϸ鼭 ī��Ʈ�� 1 �ø�
		q.pop();

		if (location * A < end) { q.push(make_pair(location * A, cnt)); } // *A
		else if (location * A == end) { cout << cnt; break; }

		if (location * B < end) { q.push(make_pair(location * B, cnt)); } // *B
		else if (location * B == end) { cout << cnt; break; }

		if (location + A < end) { q.push(make_pair(location + A, cnt)); }
		else if (location + A == end) { cout << cnt; break; } // +A�Ҷ� end���� �ʰ��Ҽ��� ����, �̷� �� ����

		if (location + B < end) { q.push(make_pair(location + B, cnt)); } // +B
		else if (location + B == end) { cout << cnt; break; }

		
		if (location + 1 < end) { q.push(make_pair(location + 1, cnt)); }
		else { cout << cnt; break; } // +1�� �� �ʰ������� ����

		if (location - A > start) { q.push(make_pair(location - A, cnt)); } // -A
		if (location - B > start) { q.push(make_pair(location - B, cnt)); } // -B
		if (location - 1 > start) { q.push(make_pair(location - 1, cnt)); } // -1 �ڷΰ��µ� end�� ������ ����


		



	}

	return 0;
}