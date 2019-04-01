#include <iostream>

using namespace std;


float Cconverter(Cc, fahr){
	
	float nytemp;
	
	nytemp = 5 * (fahr - 32) / 9;
	
	return nytemp;
	
}

float Fconverter(Ff, Cels){
	
	float nytemp;
	
	nytemp = 9 * (Cels / 5) + 32;
	return nytemp;
}

float FormelVal(float CelrF, temp){
	
	float temperatur;
	
	if(CelrF == 'C'){
		
		temperatur = Cconverter(CelrF, temp);
	} else if(CelrF == 'F'){
		
		temperatur = Fconverter(CelrF, temp);
	}
	
	return temperatur;
	
	
	
}

int main() {
	
	char typ;
	float grader, nytemperatur;
	
	cout << "Vill du omvandla till C eller F?" << endl;
	cin >> typ;
	cout << "Hur många grader?" << endl;
	cin >> grader;
	
	nytemperatur = FormelVal(typ, grader);
	
	cout << nytemperatur;
	
	return 0;
}
