#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	srand(time(0));
	int tal, max, min;
	
	cout << "Min number" << endl;
	cin >> min;
	cout << "Max number" << endl;
	cin >> max;
	
	while(tal > max or tal < min){
	tal = (rand() % max) + min;
	}
	
	cout << tal;
	
	return 0;
}
