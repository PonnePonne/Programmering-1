#include <iostream>

using namespace std;



int IncreaseFunction(int x){

	x = x + 2;
	
	return x;
	
}

int main() {
	
	int tal1;
	
	cout << "Skriv in ett tal" << endl;
	cin >> tal1;
	
	int svar;
	
	svar = IncreaseFunction(tal1);


	cout << svar;
	
	
	return 0;
}
