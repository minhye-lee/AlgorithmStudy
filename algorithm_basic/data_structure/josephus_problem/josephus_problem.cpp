#include <iostream>
#include <queue>
#include <string>
using namespace std;

string josephus(int _cnt_element,int _del_index) {
	string result = "<";
	queue<int> order;
	for(int i = 0; i < _cnt_element; i++) {
		order.push(i+1);
	}
	for(int i = 0; i < _cnt_element-1; i++) {
		for(int j = 0; j < _del_index; j++) {
			if(j < _del_index-1) {
				order.push(order.front());
				order.pop();
			} else {
				result += to_string(order.front());
				result += ", ";
				order.pop();
			}
		}
	}
	result += to_string(order.front());
	result += ">";
	return result;
}
int main() {
	int cnt_element, del_index;
	cin >> cnt_element >> del_index;
	cout << josephus(cnt_element, del_index);
	return 0;
}