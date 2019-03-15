//11228KB, 180ms
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Student {
public:
	string name;
	int korean;
	int math;
	int english;
public:
	Student(string _name, int _korean, int _math, int _english) {
		name = _name;
		korean = _korean;
		math = _math;
		english = _english;
	}
};

bool compare(Student a, Student b) {
	if(a.korean == b.korean) {
		if(a.english == b.english) {
			if(a.math == b.math) {
				return a.name < b.name;
			}
			else
				return a.math > b.math;
		}
		else
			return a.english < b.english;
	}
	else
		return a.korean > b.korean;
}

int main() {
	int inputCnt;
	scanf("%d", &inputCnt);
	vector<Student> students;
	for(int i = 0; i < inputCnt; i++) {
		string tempName;
		int tempKorean, tempMath, tempEnglish;
		cin >> tempName >> tempKorean >> tempEnglish >> tempMath;
		students.push_back(Student(tempName, tempKorean, tempMath, tempEnglish));
	}
	sort(students.begin(), students.end(), compare);
	for(int i = 0; i < inputCnt; i++) {
		printf("%s\n", students[i].name.c_str());
	}
	return 0;
}