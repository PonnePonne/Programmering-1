#include <iostream>

using namespace std;

int main() {
	
	char ord[100];
	
	cout << "Skriv in ett ord" << endl;
	cin >> ord;
	
	for(int i = 0; i < 99; i++){
		if(ord[i] == 'm' or ord[i] == 'a' or ord[i] == 't' or ord[i] == 'M' or ord[i] == 'A' or ord[i] == 'T'){
			cout << "MAT" << endl;
			break;
		} else {
			ord[i] = ord[i];
		}
		
	}
	
	return 0;
}
