#include <iostream>

using namespace std;


int Add(int x, int y){
	
int summa;

summa = x + y;
return summa;
	
}

int main() {
	
	int tal1, tal2;
	
	cout << "Skriv in ett tal" << endl;
	cin >> tal1;
	cout << "Skriv in ett till tal" << endl;
	cin >> tal2;
	
	int svar;
	
	svar = Add(tal1, tal2);
	
	cout << svar;
	
	return 0;
}
