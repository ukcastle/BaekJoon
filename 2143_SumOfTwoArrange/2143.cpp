#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long int target;
int n, m;
int a[1000];
int b[1000];
unsigned long long answer;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> target;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	//-------------------입력값

	vector<int> SumOfA, SumOfB;
	for (int i = 0; i < n; i++) {
		int tempSum = a[i];
		SumOfA.push_back(tempSum);
		for (int j = i+1; j < n; j++) {
			tempSum += a[j];
			SumOfA.push_back(tempSum);
		}
	}

	for (int i = 0; i < m; i++) {
		int tempSum = b[i];
		SumOfB.push_back(tempSum);
		for (int j = i+1; j < m; j++) {
			tempSum += b[j];
			SumOfB.push_back(tempSum);
		}
	}
	
	sort(SumOfB.begin(), SumOfB.end());

	for (int i : SumOfA) {
		//pair temp = *equal_range(SumOfB.begin(), SumOfB.end(), target - i);
		//이진탐색으로 일치하는 숫자 찾을 때 upper_bound와 lower_bound를 사용하면 된다
		
		auto ub = upper_bound(SumOfB.begin(), SumOfB.end(), target - i);
		auto lb = lower_bound(SumOfB.begin(), SumOfB.end(), target - i);

		answer += ub - lb;
	}
	cout << answer;

	return 0;
}