#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
bool visit[30];
int main() {


	string input{};
	cin >> input;

	stack<char> paren{};
	vector<pair<int, int>> v;

	long long temp{ 1 }, answer{ 0 };

	for (char a : input) {
		if (a == '[') {
			paren.push(a);
			temp *= 3;
			continue;
		}
		if(a == '('){
			paren.push(a);
			temp *= 2;
			continue;
		}


		char top = paren.top();
		paren.pop();
		if (a == ']') {
			if (top == '[') {
				answer += temp;
			}
			temp /= 3;
			//v.emplace_back(3, paren.size());
		}
		else if (a == ')') {
			if (top == '(') {
				answer += temp;
			}
			temp /= 2;
			//v.emplace_back(2, paren.size());
		}
	}

	cout << answer;

	return 0;
}


/*
for (char a : input) {
	if (a == '[') {
		paren.push(a);
		temp *= 3;
		continue;
	}
	if (a == '(') {
		paren.push(a);
		temp *= 2;
		continue;
	}

	char top = paren.top();
	paren.pop();
	if (top == '[' && a == ']') {
		//v.emplace_back(3, paren.size());
	}
	else if (top == '(' && a == ')') {
		v.emplace_back(2, paren.size());
	}
	else {
		cout << "0" << endl;
		return 0;
	}
}
*/
