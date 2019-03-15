#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

class Coord {
public:
	int X;
	int Y;
public:
	Coord(int _X, int _Y) {
		X = _X;
		Y = _Y;
	}
};

bool compare(Coord a, Coord b) {
	if(a.X == b.X) {
		return a.Y < b.Y;
	}
	else {
		return a.X < b.X;
	}
}

int main() {
	int inputCnt;
	scanf("%d", &inputCnt);
	vector<Coord> coord;
	for(int i = 0; i < inputCnt; i++) {
		int tempX, tempY;
		scanf("%d %d", &tempX, &tempY);
		coord.push_back(Coord(tempX, tempY));
	}
	sort(coord.begin(), coord.end(), compare);
	for(int i = 0; i < inputCnt; i++) {
		printf("%d %d\n", coord[i].X, coord[i].Y);
	}
	return 0;

}