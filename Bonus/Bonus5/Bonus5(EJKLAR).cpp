#include <iostream>

using namespace std;

int main() {
	
int pris, betal, vaxel;
int Kkr = 0;
int Hkr = 0;
int Tkr = 0;
int Ekr = 0;

cout << "Skriv in priset" << endl;
cin >> pris;
cout << "Hur mycket du betalade" << endl;
cin >> betal;

vaxel = betal - pris;

while(vaxel > 999){
	vaxel = vaxel - 1000;
	Kkr = Kkr + 1;
}

while(vaxel > 99){
	vaxel = vaxel - 100;
	Hkr = Hkr + 1;
}

while(vaxel > 9){
	vaxel = vaxel - 10;
	Tkr = Tkr + 1;
}

while(vaxel > 0){
	vaxel = vaxel - 1;
	Ekr = Ekr + 1;
}


cout << "Växel:" << endl;
cout << Kkr;
cout << " St tusenkronor" << endl;
cout << Hkr;
cout << " St hundrakronor" << endl;
cout << Tkr;
cout << " St tiokronor" << endl,
cout << Ekr;
cout << " St enkronor" << endl;
	return 0;
}
