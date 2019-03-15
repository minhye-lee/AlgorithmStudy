//9692KB, 116ms
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Member {
public:
	string name;
	int age;
	int index;
public:
	Member(string _name, int _age, int _index) {
		name = _name;
		age = _age;
		index = _index;
	}
};

bool compare(Member a, Member b) {
	if(a.age == b.age) {
		return a.index < b.index;
	}
	else {
		return a.age < b.age;
	}
}

int main() {
	int inputCnt;
	scanf("%d", &inputCnt);
	vector<Member> members;
	for(int i = 0; i < inputCnt; i++) {
		string tempName;
		int tempAge;
		cin >> tempAge >> tempName;
		members.push_back(Member(tempName, tempAge, i));
	}
	sort(members.begin(), members.end(), compare);
	for(int i = 0; i < inputCnt; i++) {
		printf("%d %s\n", members[i].age, members[i].name.c_str());
	}
	return 0;
}