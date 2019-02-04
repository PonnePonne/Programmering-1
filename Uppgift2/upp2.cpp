#include <iostream>

using namespace std;

int main() {
	
	float tal1, tal2, summa;
	
	cout << "Antal l bensin" << endl;
	cin >> tal1;
	cout << "Körda mil" << endl;
	cin >> tal2;
	
	summa = tal1 / tal2;
	cout << "l/mil:" << summa;
	return 0;
}
