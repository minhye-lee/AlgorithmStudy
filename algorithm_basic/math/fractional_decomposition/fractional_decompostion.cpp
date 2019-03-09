#include <iostream>
using namespace std;

int main() {
	int input;
	int num = 2;
	scanf("%d" , &input);
	while(input != 1) {
		if(input % num == 0) {
			input /= num;
			printf("%d\n" , num);
		}
		else
			num++;
	}
	return 0;
}