#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	int tal, svar;
	int tid = time(0);
	srand(tid);
	
	tal = rand()%100+1;
	
	cout << "Skriv in din gissnig" << endl;
	cin >> svar;
	
	for(int i = 0; i < 4; i++){
		
	if(svar != tal and svar < tal){
		cout << "F�rs�k igen, svaret �r st�rre �n din gissnig" << endl;
		cin >> svar;
	} else if(svar != tal and svar > tal){
		cout << "F�rs�k igen, svaret �r mindre �n din gissning" << endl;
		cin >> svar;
	} else if(svar == tal){
		cout << "Du svarade r�tt";
		i = 5;
	}
}

if(svar != tal){
	
	cout << "Slut p� f�rs�k" << endl;
}
	
	
	return 0;
}
