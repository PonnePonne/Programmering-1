#include <iostream>

using namespace std;

int main() {
	
	char ord[100];
	
	cout << "Skriv ett ord" << endl;
	cin >> ord;
	
	for(int i = 0; i < 99; i++){
		if(ord[i] == 'Z'){
			ord[i] = 'a';
		}
	}
	
	cout << ord;
	return 0;
}
