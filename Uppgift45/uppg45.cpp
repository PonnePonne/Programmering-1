#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int kast[5], tal;
	string val;
	
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
		while(tal < 1 or tal > 5) {
			cout << "Vilken tärning? (1,2,3,4 eller 5) ";
			cin >> tal;
		}
		tal--;
		kast[tal] = rand()%6 + 1;
		
		for(int i = 0; i < 5; i++) {
			cout << kast[i];
			cout << endl;
		}
	}
	
	return 0;
}
