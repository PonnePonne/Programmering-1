#include <iostream>

using namespace std;



void IncreaseFunction(int x){

	x = x + 2;
	cout << x;
	
}

int main() {
	
	int tal1;
	
	cout << "Skriv in ett tal" << endl;
	cin >> tal1;
	
	IncreaseFunction(tal1);
	
	return 0;
}
