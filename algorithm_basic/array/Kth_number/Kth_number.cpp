//21400KB, 1536ms
#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int inputCnt, checkNum;
	scanf("%d %d", &inputCnt, &checkNum);
	int arr[inputCnt];
	for(int i = 0; i< inputCnt; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + inputCnt);
	cout << arr[checkNum-1] << endl;

    return 0;
}