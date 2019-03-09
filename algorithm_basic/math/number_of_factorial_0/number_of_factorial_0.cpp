#include <iostream>
#include <sstream>

using namespace std;

int main() {
	int input;
	long long int Nfactorial = 1;
	scanf("%d" , &input);
	for(int i = input; i > 1; i--) {
		Nfactorial *= i;
	}
	stringstream out_string;
	out_string << Nfactorial;
	string result = out_string.str();
	// string result = to_string(Nfactorial);
	cout << "Nfactorial : " << Nfactorial << endl;
	cout << "result : " << result << endl;
	// int answer = 0;
	// for(int i = result.size()-1; i >= 0; i--) {
	// 	if(result[i] == '0')
	// 		answer++;
	// 	else
	// 		break;
	// }
	// cout << answer << endl;
	return 0;
}