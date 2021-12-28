#include <iostream>
using namespace std;

int main() {

		ios_base::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);

	int input{};
	cin >> input;
	//----------------�Է°��� �޴� �ܰ�

	if (input < 100) {
		cout << input;
		return 0;
	}
	
	if (input >= 1000) { input = 999; } //1000�̸� 999�� ( 1000�� �������� �ƴ�)
	
	int answer = 99;
	int nums[3];
	for (int i = 111; i <= input; i++) {
		nums[0] = i / 100;
		nums[1] = i / 10 - nums[0] * 10;
		nums[2] = i % 10;

		if ((nums[0] - nums[1]) == (nums[1] - nums[2])) { answer++; }
	}
	
	cout << answer;

	return 0;
}