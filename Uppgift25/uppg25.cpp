#include <iostream>

using namespace std;

int main() {
	int array[7];
	int x = 0;
	int y = 1;
	int summa = 0;
	
	cout << "Skriv in ett tal" << endl;
	cin >> array[0];
	cout << "Skriv in ett till tal" << endl;
	cin >> array[1];
		cout << "Skriv in ett till tal" << endl;
	cin >> array[2];
		cout << "Skriv in ett till tal" << endl;
	cin >> array[3];
		cout << "Skriv in ett till tal" << endl;
	cin >> array[4];
		cout << "Skriv in ett till tal" << endl;
	cin >> array[5];
		cout << "Skriv in ett till tal" << endl;
	cin >> array[6];

for(int i = 0; i < 3; i++){

summa = array[x] + array[y] + summa;
x = x + 2;
y = y + 2;
}

summa = summa + array[6];

if(summa < 50){
	cout << "Summan �r mindre �n 50";
} else {
	cout << "Summan �r st�rre �n 50";
}
	return 0;
}
