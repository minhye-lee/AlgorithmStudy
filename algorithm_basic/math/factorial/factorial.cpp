//1988KB 0ms
#include <iostream>
using namespace std;

int main() {
	int input;
	long long int result = 1;
	scanf("%d" , &input);
	for(int i = input; i > 1; i--) {
		result *= i;
	}
	printf("%d\n", result);
	return 0;
}