#include <iostream>

using namespace std;

int main() {
	
	int Kontroll;
	bool is_ten;
	
	cout << "Skriv in ett tal" << endl;
	cin >> Kontroll;
	
	if(Kontroll == 10){
		is_ten = true;
	} else {
		is_ten = false;
	}
	
	if(is_ten == true){
		cout << "Du skrev 10" << endl;
	} else if(is_ten == false){
		cout << "Du skrev inte 10" << endl;
	}
	return 0;
}
