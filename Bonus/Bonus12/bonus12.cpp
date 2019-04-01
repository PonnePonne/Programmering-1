#include <iostream>

using namespace std;

int main() {
	
	int array[7];
	int ny;
	int position;
	
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
	cout << "Skriv in ett nytt tal" << endl;
	cin >> ny;
	cout << "Skriv in i vilken array talen ska börja hoppa ett steg åt höger. Måste vara mellan 0-6" << endl;
	cout << "Tal nr: ";
	cin >> position;
	
	if(position == 0){
		array[0] = ny;
		array[1] = array[2];
		array[2] = array[3];
		array[3] = array[4];
		array[4] = array[5];
		array[5] = array[6];
		
	} else if(position == 1){
			array[1] = ny;
		array[2] = array[3];
		array[3] = array[4];
		array[4] = array[5];
		array[5] = array[6];
		
	} else if(position == 2){
			array[2] = ny;
		array[3] = array[4];
		array[4] = array[5];
		array[5] = array[6];
		
	} else if(position == 3){
			array[3] = ny;
			array[4] = array[5];
		array[5] = array[6];
		
	} else if(position == 4){
		array[4] = ny;
			array[5] = array[6];
		
	} else if(position == 5){
		
		array[5] = ny;
	} else if(position == 6){
		array[6] = ny;
	}
	
	cout << array[0] << endl;
	cout << array[1] << endl;
	cout << array[2] << endl;
	cout << array[3] << endl;
	cout << array[4] << endl;
	cout << array[5] << endl;
	if(position == 6){
	cout << array[6] << endl;	
	}
	
	return 0;
}
