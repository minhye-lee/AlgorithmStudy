#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool check_bracket(string _bracket) {
	stack<int> _bracket_element;
	for(int i = 0; i < _bracket.size(); i++) {
		if(_bracket[i] == '(')
			_bracket_element.push(0);
		else {
			if(_bracket_element.size())
				_bracket_element.pop();
			else
				return false;
		}	
	}
	if(_bracket_element.size())
		return false;
	else
		return true;
}

int main() {
	int cnt_bracket;
	string bracket;
	cin >> cnt_bracket;
	for(int i = 0; i < cnt_bracket; i++){
		cin >> bracket;
		if(check_bracket(bracket))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}