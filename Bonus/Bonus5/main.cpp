#include <iostream>

using namespace std;

int main() {
	
	int pris, betal, vaxel, Kkr, Hkr, Tkr, Ekr;
	
cout << "Pris för inköp" << endl;
cin >> pris;

cout << "Hur mycet betalade du" << endl;
cin >> betal;

	vaxel = betal - pris;
	
	if(vaxel > 999){
		Kkr = vaxel / 1000;
	}
	
	if(vaxel > 99){
		Hkr = (vaxel - Kkr * 1000) / 100;
	}
	
	return 0;
}
