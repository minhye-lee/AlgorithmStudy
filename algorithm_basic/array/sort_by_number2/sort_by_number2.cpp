#include <stdio.h>
#include <algorithm>

int main() {
	int inputCnt;
	scanf("%d", &inputCnt);
	int sortArr[inputCnt];
	for(int i = 0; i < inputCnt; i++) {
		scanf("%d", &sortArr[i]);
	}
	std::sort(sortArr, sortArr + inputCnt);
	for(int i = 0; i < inputCnt; i++) {
		printf("%d\n", sortArr[i]);
	}
	return 0;
}