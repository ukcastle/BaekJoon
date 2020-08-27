#include <iostream>
#include <algorithm>
using namespace std;

int nums[5000000];
//queue를 이용한 슬라이딩 윈도우 사용해라
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, l;
	cin >> n >> l;

	for (int i = 0; i < l-1; i++) {
		cin >> nums[i];
		cout << *min_element(nums, nums + i) << " ";
	}
	
	for (int i = l-1; i < n; i++) {
		cin >> nums[i];
		cout << *min_element(nums + i - l + 1, nums + i + 1) << " ";
	}
	return 0;
}