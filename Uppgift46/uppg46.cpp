#include <iostream>

using namespace std;


int Adderare(int tal, int summa){
	
	if(tal > 0){
		
		summa = tal + summa;
		tal = tal -1;
		Adderare(tal, summa);
		
	} else {
		
		return summa;
	}
	
}

int main() {
	
	int tal;
	int summa = 0;
	
	
	cout << "Skriv in ett heltal" << endl;
	cin >> tal;
	
	cout<< Adderare(tal, summa);
	
	return 0;
}
