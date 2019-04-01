#include <iostream>

using namespace std;

int main() {
	
	int x = 9;
	int array[10];
	
	cout << "Skriv ett tal" << endl;
	cin >> array[0];
	cout << "Skriv ett till tal" << endl;
	cin >> array[1];
	cout << "Skriv ett till tal" << endl;
	cin >> array[2];
	cout << "Skriv ett till tal" << endl;
	cin >> array[3];
	cout << "Skriv ett till tal" << endl;
	cin >> array[4];
	cout << "Skriv ett till tal" << endl;
	cin >> array[5];
	cout << "Skriv ett till tal" << endl;
	cin >> array[6];
	cout << "Skriv ett till tal" << endl;
	cin >> array[7];
	cout << "Skriv ett till tal" << endl;
	cin >> array[8];
	cout << "Skriv ett till tal" << endl;
	cin >> array[9];
	
	while(x >= 0){
		cout << array[x] << endl;
		x = x - 1;
	}
	return 0;
}
