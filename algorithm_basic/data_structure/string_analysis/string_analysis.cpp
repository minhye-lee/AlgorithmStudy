#include <iostream>
#include <string>
using namespace std;

int main() {
	string sentence;
	while(getline(cin, sentence)) {
		int output[4] = {0};
		for(int i = 0; i < sentence.size(); i++) {
			if(sentence[i] >= 'a' && sentence[i] <= 'z')
				output[0]++;
			else if(sentence[i] >= 'A' && sentence[i] <= 'Z')
				output[1]++;
			else if(sentence[i] >= '0' && sentence[i] <= '9')
				output[2]++;
			else
 				output[3]++;
		}
		for(int i = 0; i < 4; i++) {
			cout << output[i] << " ";
		}
		cout << endl;
	}
}