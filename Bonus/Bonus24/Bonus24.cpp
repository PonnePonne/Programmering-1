#include <iostream>

using namespace std;

struct position{
	int x;
	int y;
};


position kord(position pos){
	
	cout << "Skriv in x-kordinaten för bollen. (Får inte vara över 10 eller under 0.)" << endl;
	cin >> pos.x;
	cout << "Skriv in y-kordinaten för bollen. (Får inte vara över 10 eller under 0)" << endl;
	cin >> pos.y;
	
	
	while(pos.x < 0 or pos.x > 10 or pos.y < 0 or pos.y > 10){
		
		cout << "Skriv om x-kordinaten. (Får inte vara över 10 eller under 0)" << endl;
		cin >> pos.x;
		cout << "Skriv om y-kordinaten. (Får inte vara över 10 eller under 0)" << endl;
		cin >> pos.y;
	}
	
	
	return pos;
	
}

int plan(char boll, position pos){
	
	system("cls");
	
	for(int n = 0; n < pos.y; n++){
		cout << endl;
	}
	
	for(int i = 0; i < pos.x; i++){
		
		cout << " ";
	}
	
	
	cout << boll << endl;
	
	
}



int main() {
	
	char svar = 'j';
	char boll;
	position pos;
	
	while(svar == 'j'){
		boll = 'O';
		
	system("cls");

pos = kord(pos);

svar = plan(boll, pos);

cout << "Vill du köra igen? (skriv j om ja)" << endl;
	cin >> svar;

}
	
	return 0;
}
