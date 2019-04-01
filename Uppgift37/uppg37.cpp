#include <iostream>

using namespace std;

int Calculator(float ett, float tva, char satt){
	
	float summa;
	
	if(satt == '+'){
		summa = ett + tva;
	} else if(satt == '-'){
		summa = ett - tva;
	} else if(satt == '*'){
		summa = ett * tva;
	} else if(satt == '/'){
		summa = ett / tva;
	}
	
	cout << summa;
	
}

int main() {
	
	float tal1, tal2;
	char typ;
	
	cin >> tal1;
	cin >> typ;
	cin >> tal2;
	
	Calculator(tal1, tal2, typ);
	
	
	return 0;
}
