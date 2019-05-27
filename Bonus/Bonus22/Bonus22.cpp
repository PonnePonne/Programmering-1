#include <iostream>

using namespace std;

int fibofunct(int tal, int gammtal){

	tal = tal + gammtal;
	gammtal = tal - gammtal;
	return tal;
		
	
}

int main() {
	
	int tal = 1;
	int rakna = 1;
	int gammtal = 0;
	
	
	while(rakna < 21){
		
		cout << fibofunct(tal, gammtal) << endl;;
		tal = tal + gammtal;
		gammtal = tal - gammtal;
		rakna = rakna + 1;
		
	}
		
		
	return 0;
}
