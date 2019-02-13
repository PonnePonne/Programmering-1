#include <iostream>

using namespace std;

int main() {
	
int strk;
int slut = 0;
int ant = 10;
int star = 6;

cout << "När ska sträcken börja" << endl;
cin >> strk;

while(star > 1){
	slut = slut + 1;
	if(strk = slut){
		cout << "-";
	}
	cout << "*";
	star = star - 1;
}
if(strk = 6){
	cout << "-" << endl;
}
if(strk < 6){
	cout << "*" << endl;
	
}
	return 0;
}
