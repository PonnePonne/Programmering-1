#include <iostream>

using namespace std;

int main() {
	
	string saker[10];
	
	cout << "Vad heter huvudpersonen?" << endl;
cin >> saker[0];
cout << "Var bor den?" << endl;
cin >> saker[1];
cout << "Vad har den f�r intressen?" << endl;
cin >> saker[2];
cout << "Vad �r personens favoritmat" << endl;
cin >> saker[3];

for(int i = 0; i < 4; i++){
	cout << saker[i] << endl;
}

}
