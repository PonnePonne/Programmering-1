#include <iostream>

using namespace std;

int main() {
	
	int tal1;
	int tal2 = 0;
	
	cout << "Skriv in ett tal" << endl;
	cin >> tal1;
	
	for(tal1 = tal1; tal1 > tal2;) {
		
		cout << tal1;
		
		tal1 = tal1 -1;
	}
	
	cout << 0;
	return 0;
}
