#include <iostream>

using namespace std;

int main() {
	
	int tal1, tal2;
	
	cout << "Aktuellt �r" << endl;
	cin >> tal1;
	cout << "Skriv in vilket �r du skaffade bilen" << endl;
	cin >> tal2;
	if(tal1 - tal2 >25) {
		cout << "V�lj en veteranf�rs�kring";
	} else {
	
	if(tal1 - tal2 <5) {
		cout << "V�lj en helf�rs�kring";
	} else {
		cout << "V�lj en halvf�rs�kring";
	}
	}
	return 0;
}
