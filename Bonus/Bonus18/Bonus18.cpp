#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	string jaelrnej = "ja";
	int tal, svar, ai;
	int tid = time(0);
	srand(tid);
	
	while(jaelrnej == "ja"){
	tal = rand()%100+1;
	
	cout << "Skriv in din gissnig" << endl;
	cin >> svar;
	
	ai = rand()%100+1;
	
	for(int i = 0; i < 4 and ai != tal; i++){
		
	if(svar != tal and svar < tal and ai != tal and ai < tal){
		cout << "Försök igen, svaret är större än din gissnig. Talet är större än " << ai << endl;
		cin >> svar;
		ai = rand()%100+1;
	} else if(svar != tal and svar < tal and ai != tal and ai > tal){
		cout << "Försök igen svaret är större än din gissning. Talet är mindre än " << ai << endl;
		cin >> svar;
		ai = rand()%100+1;
	}
	else if(svar != tal and svar > tal and ai!= tal and ai > tal){
		cout << "Försök igen, svaret är mindre än din gissning. Talet är mindre än " << ai << endl;
		cin >> svar;
		ai = rand()%100+1;
	} else if(svar != tal and svar > tal and ai != tal and ai < tal){
		cout << "Försök igen, svaret är mindre än din gissning. Talet är större än " << ai << endl;
		cin >> svar;
		ai = rand()&100+1;
	}else if(svar == tal){
		cout << "Du svarade rätt";
		i = 5;
	} else if(ai == tal){
		cout << "AI:n svarade rätt. Talet var " << svar << endl;
		break;
	}
}


if(svar != tal and ai != tal){
	
	cout << "Slut på försök. Vill du försöka igen?" << endl;
	cin >> jaelrnej;
}

if(jaelrnej != "ja"){
	break;
}
	
}
	
	return 0;
}
