#include <iostream>

using namespace std;

int main() {
	
	char namn[100];
	
	cout << "Skriv in ditt namn" << endl;
	cin >> namn;
	
	namn[0] = 'Z';
	cout << namn;
	

	return 0;
}
