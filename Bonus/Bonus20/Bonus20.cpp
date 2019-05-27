#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int kast[5], tal;
	string val, omkast;
	
	for(int i = 0; i < 5; i++) {
		kast[i] = rand()%6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << kast[i];
		cout << endl;
	}
	
	while(val != "Ja" and val != "Nej") {
		cout << "Vill du kasta om en tärning? (Ja eller Nej) ";
		cin >> val;
	}
	
	if(val == "Ja") {
		cout << "Vilken tärning? (1,2,3,4 eller 5) (Inga blanksteg) ";
		cin >> omkast;
		
		for(int i = 0; i < 5; i++) {
			if(omkast[i] == '1') {
				kast[0] = rand() % 6 + 1;
			}
			if(omkast[i] == '2') {
				kast[1] = rand() % 6 + 1;
			}
			if(omkast[i] == '3') {
				kast[2] = rand() % 6 + 1;
			}
			if(omkast[i] == '4') {
				kast[3] = rand() % 6 + 1;
			}
			if(omkast[i] == '5') {
				kast[4] = rand() % 6 + 1;
			}
		}
		
		
		for(int i = 0; i < 5; i++) {
			cout << kast[i];
			cout << endl;
		}
	}
	
	return 0;
}
