#include <iostream>

using namespace std;


float WhileMax(int tal1);
	

int main() {
	
	int tal1 = 20;
	
	WhileMax(tal1);
	
	return 0;
}

float WhileMax(int tal1){
	
	int eget;
	
	cout << "Skriv in ett tal" << endl;
	cin >> eget;
	
	while(eget > tal1){
		
		cout << "FEL! Skriv in ett nytt v�rde, m�ste vara mindre!" << endl;
		cin >> eget;
		
	}
	
	cout << "R�tt! Ditt tal �r antingen mindre eller lika med 20!";
}
