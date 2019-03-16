#include <stdio.h>
#define SIZE 10001
using namespace std;

int cache[SIZE] = {0};
int main() {
    int inputCnt;
	scanf("%d", &inputCnt);
	for(int i = 0; i < inputCnt; i++) {
		int tempInput;
		scanf("%d", &tempInput);
		cache[tempInput]++;
	}
	for(int i = 0; i < SIZE; i++) {
		while(cache[i] > 0) {
			printf("%d\n", i);
			cache[i]--;
		}
	}
    return 0;
}