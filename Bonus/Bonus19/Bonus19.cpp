#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	string jaelrnej = "ja";
	int tal, svar, ai, progguess;
	int tid = time(0);
	srand(tid);
	
	while(jaelrnej == "ja"){
	tal = rand()%100+1;
	
	cout << "Skriv in din gissnig" << endl;
	cin >> svar;
	
	ai = rand()%100+1;
	
	for(int i = 0; i < 4 and ai != tal; i++){
		
	if(svar != tal and svar < tal and ai != tal and ai < tal){
		cout << "F�rs�k igen, svaret �r st�rre �n din gissnig. Talet �r st�rre �n " << ai << endl;
		cin >> svar;
		progguess = ai;
		ai = rand()%100+progguess;
	} else if(svar != tal and svar < tal and ai != tal and ai > tal){
		cout << "F�rs�k igen svaret �r st�rre �n din gissning. Talet �r mindre �n " << ai << endl;
		cin >> svar;
		progguess = ai;
		ai = rand()%progguess+1;
	}
	else if(svar != tal and svar > tal and ai!= tal and ai > tal){
		cout << "F�rs�k igen, svaret �r mindre �n din gissning. Talet �r mindre �n " << ai << endl;
		cin >> svar;
		progguess = ai;
		ai = rand()%progguess+1;
	} else if(svar != tal and svar > tal and ai != tal and ai < tal){
		cout << "F�rs�k igen, svaret �r mindre �n din gissning. Talet �r st�rre �n " << ai << endl;
		cin >> svar;
		progguess = ai;
		ai = rand()&100+progguess;
	}else if(svar == tal){
		cout << "Du svarade r�tt";
		i = 5;
	} else if(ai == tal){
		cout << "AI:n svarade r�tt. Talet var " << svar << endl;
		break;
	}
}


if(svar != tal and ai != tal){
	
	cout << "Slut p� f�rs�k. Vill du f�rs�ka igen?" << endl;
	cin >> jaelrnej;
}

if(jaelrnej != "ja"){
	break;
}
	
}
	
	return 0;
}
