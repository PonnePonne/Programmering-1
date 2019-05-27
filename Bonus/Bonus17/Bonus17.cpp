#include <iostream>
#include <math.h>

using namespace std;

float Calc(float kat1, float kat2, float hypo, string sida);

int main() {
	
	float hypo, kat1, kat2;
	string sida;
	
	cout << "Vilken sida ska ber�knas? Hypotenusan eller kateter" << endl;
	cin >> sida;
	
	if(sida == "hypotenusan"){
		
		cout << "Skriv in v�rdet p� ena kateten" << endl;
		cin >> kat1;
		cout << "Skriv in v�rdet p� den andra kateten" << endl;
		cin >> kat2;
		
	} else if(sida == "kateter"){
		
		cout << "Skriv in v�rdet p� den k�nda kateten" << endl;
		cin >> kat1;
		cout << "Skriv in v�rdet p� hypotenusan" << endl;
		cin >> hypo;
		
	}
	
	Calc(kat1, kat2, hypo, sida);
	
	return 0;
}

float Calc(float kat1, float kat2, float hypo, string sida){
	
	if(sida == "kateter"){
	
	kat2 = (hypo * hypo) - (kat1 * kat1);
	kat2 = sqrt(kat2);
} else if(sida == "hypotenusan"){

	hypo = sqrt(kat1 * kat1 + kat2 * kat2);
	
}

	cout << "Hypotenusan: " << hypo;
	cout << " Kateterna: " << kat1 << ", " << kat2;
	
	
	
}
