#include <iostream>
#include <queue>
#include <vector>
using namespace std;

/*
	�켱���� ť �̿��ؼ� �����̵�������
	���� ���ڵ��� pair.second üũ�ؼ� ����
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, l;
	cin >> n >> l;

	register priority_queue < pair<int, int>, vector<pair<int, int>>, greater<>> pq; 
	// greater<> -> ù��° ���ڰ� �����������, pair�϶� ù��°���ڰ� ������ �ι������� ��
	// ū������ ���� less<>
	//pri~queue < �ڷ��� , �����̳� , �Լ� > ����;

	register int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		pq.push({ temp,i });
		while (pq.top().second <= i - l) { pq.pop(); }
		cout << pq.top().first << " ";
	}

	return 0;
}
