#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int main() {

	string input{};
	cin >> input;

	stack<char> paren{};
	vector<pair<int, int>> v;

	for (char a : input) {
		if (a == '[' || a == '(') {
			paren.push(a);
			continue;
		}

		char top = paren.top();
		paren.pop();
		if (top == '[' && a == ']') {
			v.emplace_back(3, paren.size());
		}
		else if (top == '(' && a == ')') {
			v.emplace_back(2, paren.size());
		}
		else {
			cout << "0" << endl;
			return 0;
		}
	}
	//다시생각해보자
	vector<pair<int,int>> result;
	result.push_back(v.front());

	for (int i = 1; i < v.size(); i++) {
		if (result.back().second < v[i].second) { //적으면
			result.back().first = (v[i].first * result.back().first);
		}
	}



	return 0;
}