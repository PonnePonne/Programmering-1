#include <iostream>

using namespace std;

int main() {
	
int tal1, tal2;

cout << "Skriv in tal" << endl;
cin >> tal1;
cout << "Ett till tal" << endl;
cin >> tal2;

if(tal1 == tal2) {
	cout << "Grattis";
} else if(tal1 - tal2 < 10 and 0 < tal1 - tal2){
	cout << "n�stan";
} else if(tal2 - tal1 < 10 and 0 < tal2 - tal1){
	cout << "n�stan";
} else {
	cout << "F�rlust";
}
	return 0;
}
