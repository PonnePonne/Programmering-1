#include <iostream>

using namespace std;

int main() {
	
	int tal1, tal2;
	
	cout << "Aktuellt år" << endl;
	cin >> tal1;
	cout << "Skriv in vilket år du skaffade bilen" << endl;
	cin >> tal2;
	if(tal1 - tal2 >25) {
		cout << "Välj en veteranförsäkring";
	} else {
	
	if(tal1 - tal2 <5) {
		cout << "Välj en helförsäkring";
	} else {
		cout << "Välj en halvförsäkring";
	}
	}
	return 0;
}
