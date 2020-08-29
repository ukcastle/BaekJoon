#include <iostream>
#include <queue>
#include <vector>
using namespace std;

/*
	우선순위 큐 이용해서 슬라이딩윈도우
	지난 숫자들은 pair.second 체크해서 삭제
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, l;
	cin >> n >> l;

	register priority_queue < pair<int, int>, vector<pair<int, int>>, greater<>> pq; 
	// greater<> -> 첫번째 숫자가 작은순서대로, pair일땐 첫번째숫자가 같으면 두번쨰숫자 비교
	// 큰수부터 뺄땐 less<>
	//pri~queue < 자료형 , 컨테이너 , 함수 > 변수;

	register int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		pq.push({ temp,i });
		while (pq.top().second <= i - l) { pq.pop(); }
		cout << pq.top().first << " ";
	}

	return 0;
}
