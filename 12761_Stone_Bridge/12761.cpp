#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*
	���
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
	pair�� ���� ������ġ�� cnt ����
	bfs���� Ǯ���� ������?
	��;��� �޸������Ű�����
*/

int main() {
	
	int A{}, B{}, start{}, end{};
	cin >> A >> B >> start >> end;
	//-----------------�Է°��� �޴� �ܰ�

	queue<pair<int, int>> q; //����:��ġ ������:ī��Ʈ
	q.push(make_pair(start,0));

	while (true) {
		int location = q.front().first;
		int cnt = q.front().second+1; //ȣ���ϸ鼭 ī��Ʈ�� 1 �ø�
		q.pop();
	}

	return 0;
}