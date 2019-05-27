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
		
		cout << "FEL! Skriv in ett nytt värde, måste vara mindre!" << endl;
		cin >> eget;
		
	}
	
	cout << "Rätt! Ditt tal är antingen mindre eller lika med 20!";
}
