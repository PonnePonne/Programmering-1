#include <iostream>

using namespace std;

int main() {
	
	int counter;
	int max = 0;
	
	cout << "Skriv in högsta ett tal" << endl;
	cin >> counter;
	
	while(counter > max){
		cout << counter;
		
		counter = counter - 1;
	}
	return 0;
}
