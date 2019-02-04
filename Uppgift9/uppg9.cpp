#include <iostream>

using namespace std;
int main() {
	
	int tal1, tal2, tal3;
	cout << "skriv in första talet" << endl;
	cin >> tal1;
	cout << "Andra talet" << endl;
	cin >> tal2;
	cout << "Tredje talet" << endl;
	cin >> tal3;
	
if(tal1 > tal2 and tal1 > tal3){
	cout << tal1;
} else {
	if(tal2 > tal1 and tal2 > tal3){
		cout << tal2;
	} else {
		if(tal3 > tal1 and tal3 > tal2){
			cout << tal3;
		}
	}
}
	return 0;
}
