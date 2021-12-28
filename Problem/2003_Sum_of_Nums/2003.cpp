#include <iostream>
using namespace std;

int main() {
	register int nums[10000];
	register int answer{};
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, target;
	cin >> n >> target;
	
	register int num;

	cin >> nums[0];
	if (nums[0] == target) { answer++; }

	int searchIndex{};
	for (int i = 1; i < n; i++) {
		cin >> num;
		nums[i] = nums[i-1] + num;
		if (nums[i] == target) { answer++; }
	} // 합을 저장

	//-------------------------------값을 받는 단계


	for (int i = 0; i < n; i++) {
		if (nums[i] >= target) {
			searchIndex = i;
			break;
		}
	}

	for (int i = searchIndex; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (nums[i] - nums[j] == target) {
				answer++;
				break;
			}
		}
	}
	cout << answer;

	return 0;
}