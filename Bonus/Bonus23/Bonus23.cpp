#include <iostream>

using namespace std;

int Prime(int number, int i) {
	if(i == 1){
		return 1;
	} else if(number % i == 0){
		return 0;
	} else{
		return Prime(number, i-1);
	}
}

int main() {
	int tal = 1000001, test;
	while(tal > 1000000) {
		cout << "Skriv in ett tal. Talet f�r inte vara �ver 100000. M�ste vara positivt" << endl;
		cin >> tal;
	}
	test = Prime(tal, tal/2);
	
	if(test == 1){
		cout << tal << " �r ett primtal";
	} else {
		cout << tal << " �r inte ett primtal";
	}
	return 0;
}
