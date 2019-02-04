#include <iostream>

using namespace std;
int main() {
	
	int tal1, tal2, tal3;
	
	cout << "Skriv in starvärde. MÅSTE VARA MELLAN 10 OCH 20" << endl;
	cin >> tal1;
	cout << "Skriv in hur stora steg" << endl;
	cin >> tal2;
	cout << "Skriv in när den ska sluta räkna" << endl;
	cin >> tal3;
	
	while(tal1 > 20 or tal1 < 10){
		cout << "FEL" << endl;
	} 
	
	while(tal1 > tal3){
		cout << tal1 << endl;
		
		tal1 = tal1 - tal2;
	}
	return 0;
}
