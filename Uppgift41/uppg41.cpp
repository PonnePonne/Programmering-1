#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int random(int tal, int max, int min){
	
		while(tal > max or tal < min){
	tal = (rand() % max) + min;
	}
	
	return tal;
	
}

int main() {
	
	srand(time(0));
	int tal, max, min;
	
	cout << "Min number" << endl;
	cin >> min;
	cout << "Max number" << endl;
	cin >> max;
	
	tal = random(tal, max, min);
	
	cout << tal;
	
	return 0;
}
