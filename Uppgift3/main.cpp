#include <iostream>

using namespace std;

int main() {
	
	float tal1, tal2, tal3, tal4, summa;
	float tal5 = 1.12;
	
	cout << "Antal Kg Produkt 1" << endl;
	cin >> tal1;
	cout << "Pris per Kg" << endl;
	cin >> tal2;
	cout << "Antal Kg Produkt 2" << endl;
	cin >> tal3;
	cout << "Pris per Kg" << endl;
	cin >> tal4;
	
	summa = (tal1 * tal2 + tal3 * tal4 )* tal5;
	cout << "pris:" << summa;
	return 0;
}
