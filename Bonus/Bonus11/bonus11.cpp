#include <iostream>

using namespace std;

int main() {
	int array[5];
	bool is_same;
	int x = 0;
	int y = 1;
	
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
	
	for(int i = 0; i < 25; i++){
			if(y > 4) {
		x = x + 1;
		y = 0;
		
	}
	if(array[x] == array[y]){
		cout << " Minst två av talen är samma" << endl;
		break;
	} else {
		y = y + 1;
		if(x == y){
			y = y + 1;
		}
	}
	
	if(array[x] != array[y]){
		cout << "Inga av talen är identiska" << endl;
	}
	
	}
	

	return 0;
}
