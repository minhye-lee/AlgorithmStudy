//1988KB, 96ms
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Card {
public:
	long long name;
	int count;
public:
	Card(long long _name) {
		name = _name;
		count = 1;
	}
};
bool compare(Card a, Card b) {
	if(a.count == b.count) {
		return a.name> b.name;
	}
	else {
		return a.count < b.count;
	}
}
int main() {
  int inputCnt;
	bool isNew = true;
	vector<Card> cards;
	scanf("%d", &inputCnt);
	for(int i = 0; i < inputCnt; i++) {
		isNew = true;
		long long tempNum;
		cin >> tempNum;
		for(int j = 0; j < cards.size(); j++) {
			if(cards[j].name == tempNum) {
				isNew = false;
				cards[j].count++;
				break;
			}
		}
		if(isNew) {
			cards.push_back(Card(tempNum));
		}
	}

	sort(cards.begin(), cards.end(), compare);
	cout << cards.back().name << endl;
    return 0;
}