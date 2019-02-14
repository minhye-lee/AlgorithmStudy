#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Editor {
	private:
		stack<char> left_cursor;
		stack<char> right_cursor;
		string result = "";
	public:
		Editor(string sentence) {
			for(int i = 0; i < sentence.size(); i++) {
				left_cursor.push(sentence[i]);
			}
		}
		void cmd_P(char element) {
			left_cursor.push(element);
		}
		void cmd_L() {
			if(left_cursor.size()){
				right_cursor.push(left_cursor.top());
				left_cursor.pop();
			}
		}
		void cmd_D() {
			if(right_cursor.size()){
				left_cursor.push(right_cursor.top());
				right_cursor.pop();
			}
		}
		void cmd_B() {
			if(left_cursor.size())
				left_cursor.pop();
		}
		string cmd_Print() {
			while(!left_cursor.empty()) {
				right_cursor.push(left_cursor.top());
				left_cursor.pop();
			}
			while(!right_cursor.empty()) {
				result += right_cursor.top();
				right_cursor.pop();
			}
			return result;
		}
};

int main() {
	string sentence;
	char cmd;
	int cnt_cmd;
	cin >> sentence >> cnt_cmd;
	Editor myEditor(sentence);
	for(int i = 0; i < cnt_cmd; i++) {
		cin >> cmd;
		switch(cmd) {
			case 'P': {
				char element;
				cin >> element;
				myEditor.cmd_P(element);
				break;
			}
			case 'L':
				myEditor.cmd_L();
				break;
			case 'D':
				myEditor.cmd_D();
				break;
			case 'B':
				myEditor.cmd_B();
				break;
			default:
				cout << "invalid option" << endl;
		}
	}
	cout << myEditor.cmd_Print();
	return 0;
}