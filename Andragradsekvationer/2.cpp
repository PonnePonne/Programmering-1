#include <iostream>

#include <math.h>

using namespace std;

int main() {
	
	float a, b, c, xett, xtva, p, q, pupp, symm, extr;
	
	cout << "Skriv in a" << endl;
	cin >> a;
	cout << "Skriv in b" << endl;
	cin >> b;
	cout << "Skriv in c" << endl;
	cin >> c;
	
	p = b/a;
	q = c/a;
	pupp = p * p;
	
	xett = (-1 * p / 2) + sqrt(pupp / 4 - q);
	xtva = (-1 * p / 2) - sqrt(pupp / 4 - q);
	
	cout << xett << endl;
	cout << xtva << endl;
	
	symm = (xett + xtva) / 2;
	
	extr = symm * symm * a + symm * b + c;
	
		if(pupp / 4 - q == 0){
		cout << "Finns en reell l�sning" << endl;
	} else if(pupp / 4 - q > 0){
		cout << "Finns tv� reella l�sningar" << endl;
	} else if(pupp / 4 - q < 0){
		cout << "Inga reella l�snigar" << endl;
	}
	
cout << "Symmetrilinje" << endl;
	cout << symm << endl;
	cout << "Extrempunkten" << endl;
	cout << extr << endl;
	

	return 0;
}
