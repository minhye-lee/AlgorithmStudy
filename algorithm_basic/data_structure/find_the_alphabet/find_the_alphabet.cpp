#include <iostream>
#include <string>
using namespace std;

int main() {
	int alphabet[26];
	fill_n(alphabet, 26, -1);
	string input_word;
	cin >> input_word;
	for(int i = 0; i < input_word.size(); i++) {
		if(alphabet[int(input_word[i]-97)] == -1)
			alphabet[int(input_word[i])-97] = i; 
	}
	for(int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}
	return 0;
}