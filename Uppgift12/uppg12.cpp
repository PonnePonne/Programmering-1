#include <iostream>

using namespace std;

int main() {
	
	int losen = 7389;
	int tal1;
	
	cout << "Skriv in pinkod" << endl;
	cin >> tal1;
	
	if(tal1 == losen){
		cout << "Grattis, du f�r nu ta ut pengar";
	} else {
		cout << "FEL! F�rs�k igen" << endl;
		cin >> tal1;
		if(tal1 == losen){
			cout << "Grattis, du f�r nu ta ut pengar";
		} else {
			cout << "FEL! Sista f�rs�ket nu" << endl;
			cin >> tal1;
			if(tal1 == losen){
				cout << "Grattis, du f�r nu ta ut pengar";
			} else {
				cout << "Ditt kort �r nu sp�rrat";
			}
		}
	}
	return 0;
}
