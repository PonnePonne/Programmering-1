#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	string jaelrnej = "ja";
	int tal, svar;
	int tid = time(0);
	srand(tid);
	
	while(jaelrnej == "ja"){
	tal = rand()%100+1;
	
	cout << "Skriv in din gissnig" << endl;
	cin >> svar;
	
	for(int i = 0; i < 4; i++){
		
	if(svar != tal and svar < tal){
		cout << "Försök igen, svaret är större än din gissnig" << endl;
		cin >> svar;
	} else if(svar != tal and svar > tal){
		cout << "Försök igen, svaret är mindre än din gissning" << endl;
		cin >> svar;
	} else if(svar == tal){
		cout << "Du svarade rätt";
		i = 5;
	}
}


if(svar != tal){
	
	cout << "Slut på försök. Vill du försöka igen?" << endl;
	cin >> jaelrnej;
}
	
}
	
	return 0;
}
