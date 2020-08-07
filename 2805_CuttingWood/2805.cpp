#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define LLI long long int 

int main() {
	LLI woodNum{}, targetLength{};
	vector<LLI> woodList;
	cin >> woodNum; cin >> targetLength; // 첫번째 줄 

	for (LLI i = 0; i < woodNum; i++) { // 두번째 줄
		int tempWood{};
		cin >> tempWood;
		woodList.push_back(tempWood);
	}
	//----------------------------- 입력값을 받는 단계

	LLI front{ 0 };
	LLI end{ 1000000000 };
	LLI middle{};

	while (front <= end) {
		LLI sum{};
		middle = (front + end) / 2;
		for (LLI nowWood : woodList) {
			if (nowWood > middle) {
				sum += nowWood - middle;
				if (sum > targetLength) { break; }
			}
		}

		if (sum < targetLength) { end = middle - 1; }
		else { front = middle+1; }

	}
	
	cout << middle;

	return 0;
}