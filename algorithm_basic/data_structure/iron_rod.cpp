#include <iostream>
#include <string>
#include <stack>
using namespace std;

int check_cnt_rod(string _iron_rod) {
	stack<int> _iron_rod_element;
	int result = 0;
	for(int i = 0; i < _iron_rod.size(); i++) {
		if(_iron_rod[i] == '(')
			_iron_rod_element.push(0);
		else {
			_iron_rod_element.pop();
			if(_iron_rod[i-1] == '(')
				result += _iron_rod_element.size();
			else
				result += 1;
		}
	}
	return result;
}
int main() {
	string iron_rod;
	cin >> iron_rod;
	cout << check_cnt_rod(iron_rod);
	return 0;
}