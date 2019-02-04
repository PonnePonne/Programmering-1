#include <iostream>

using namespace std;

int main() {
	
	int losen = 7389;
	int tal1;
	
	cout << "Skriv in pinkod" << endl;
	cin >> tal1;
	
	if(tal1 == losen){
		cout << "Grattis, du får nu ta ut pengar";
	} else {
		cout << "FEL! Försök igen" << endl;
		cin >> tal1;
		if(tal1 == losen){
			cout << "Grattis, du får nu ta ut pengar";
		} else {
			cout << "FEL! Sista försöket nu" << endl;
			cin >> tal1;
			if(tal1 == losen){
				cout << "Grattis, du får nu ta ut pengar";
			} else {
				cout << "Ditt kort är nu spärrat";
			}
		}
	}
	return 0;
}
