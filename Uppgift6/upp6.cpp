#include <iostream>

using namespace std;

int main() {
	int tal1, tal2, tal3, tal4, summa;
	
	cout << "Skriv 1 f�r plus, 2 f�r minus, 3 f�r g�nger, 4 f�r division" << endl;
	cin >> tal3;
	cout << "Skriv f�rsta talet" << endl;
	cin >> tal1;
	cout << "andra talet" << endl;
	cin >> tal2;
	
	if(tal3 == 1){
		summa = tal1 + tal2;
		cout << summa;
	} else {
		if(tal3 == 2){
			summa= tal1 - tal2;
			cout << summa;
		} else{
			if(tal3 == 3){
				summa = tal1 * tal2;
				cout << summa;
			} else {
				if(tal3 == 4){
					summa = tal1 / tal2;
					cout << summa;
				}
			}
		}
	}


	
	return 0;
}
