#include <iostream>

using namespace std;

int main() {
	
	int tal1, summa;
	int tal2 = 0;
	
	cout << "Skriv in ett tal" << endl;
	cin >> tal1;
	
	while(tal2 < 13){
		summa = tal1 * tal2;
		
		cout << "Tal" << endl;
		
		cout << summa << endl;
		
		tal2 = tal2 + 1;
		
	}
	return 0;
}
